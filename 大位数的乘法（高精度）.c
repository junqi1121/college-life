#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char num_1[2002], num_2[2002],  num_3[2002], num_4[2002],ret[5000];
void mul(int x,int y,char*num,char*ret_1)
{//���㷽�����˹�����ʱ��ʽ��ԭ��Ҫע���λʱ��ϸ�ڣ�
	for (int i = 0; i < y; i++)
	{
		int d = 0, result = 0, j;//d��ʾ��λ,result��ʾδ��λ֮ǰ�Ľ��
		for (j = 0; j < x; j++)
		{
			result = (ret_1[i] - '0') * (num[j] - '0') + d + ret[i + j] - '0';
			ret[j + i] = result % 10 + '0';
			d = result / 10;
		}
		ret[j + i] = d + '0';
	}
}
int main()
{
	scanf("%s%s", &num_1,&num_2);
	int len[3];
	len[1] = strlen(num_1),	len[2] = strlen(num_2);
	//���������ְ����������Ǵӵ�λ����λ���棬�������
	for (int i = len[1] - 1, j = 0; i >= 0; i--, j++)
		num_3[i] = num_1[j];
	for (int i = len[2] - 1, j = 0; i >= 0; i--, j++)
		num_4[i] = num_2[j];
	//�����������ַ�����Ӧ��λ�ø���0��������Ŵ˺�ļ���
	for (int i = 0; i < len[1] + len[2]; i++)
		ret[i] = '0';
	//Ϊ��ʹ������������������ǰ���λ���Ⱥ����
	if (len[1] > len[2])
		mul(len[1], len[2], num_3, num_4);
	else
		mul(len[2], len[1], num_4, num_3);
	//���ǰ��0������
	int count = len[1]+len[2]-1;
	while (count>=1&& ret[count] == '0' && isalnum(ret[count-1]))
		count--;
	//���򽫽�����
	for (int i = count; i >= 0; i--)
		printf("%c", ret[i]);
	return 0;
}