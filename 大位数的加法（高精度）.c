#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char num_1[2001], num_2[2001], num_3[2001], num_4[2001], ret[5000];
void mul(int x, int y, char* num, char* ret_1, char* ret_2)
{
	for (int i = 0; i < y; i++)
	{
		int d = 0, result = 0, j;//d表示进位,result表示未进位之前的结果
		for (j = 0; j < x; j++)
		{
			result = (ret_1[i] - '0') * (num[j] - '0') + d + ret_2[i + j] - '0';
			ret_2[j + i] = result % 10 + '0';
			d = result / 10;
		}
		ret_2[j + i] = d + '0';
	}
	if (ret_2[x + y - 1] == '0')
		ret_2[x + y - 1] == '\0';
	else
		ret_2[x + y] = '\0';
}
int main()
{
	scanf("%s", &num_1);
	scanf("%s", &num_2);
	int len[3] = { 0 };
	len[1] = strlen(num_1);
	len[2] = strlen(num_2);
	for (int i = len[1] - 1, j = 0; i >= 0; i--, j++)
		num_3[i] = num_1[j];
	for (int i = len[2] - 1, j = 0; i >= 0; i--, j++)
		num_4[i] = num_2[j];
	for (int i = 0; i < len[1] + len[2]; i++)
		ret[i] = '0';
	if (len[1] > len[2])
		mul(len[1], len[2], num_3, num_4, ret);
	else
		mul(len[2], len[1], num_4, num_3, ret);
	for (int i = strlen(ret) - 1; i >= 0; i--)
		printf("%c", ret[i]);
}