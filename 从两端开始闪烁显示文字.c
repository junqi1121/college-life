#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char a[] = "welcome to sichuan university!";
	char b[] = "                                ";
	int left = 0;
	int right = strlen(a) - 1;/*strlen()�������ַ����ĳ��ȣ���Ҫ����string.hͷ�ļ�*//*���������ĳ��ȿ�����sizeof����ķ��������ַ���������һ�����ص�'\0'*/
	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];
		printf("%s\n", b);
		Sleep(1000);/*ÿ����ʾ��ͣ��1000���룬��Ҫ����ͷ�ļ�windows.h*/
		system("cls");/*cls:clear screen,�����Ļ�ϸղ���ʾ�����ݣ�Ҳ��Ҫ��windows.h*/
		left++;
		right--;
	}
	printf("Welcome to sichuan university!");
	return 0;
}