#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*��쳲��������еĵ�n��*/
/*쳲��������У�1��1��2��3��5��8��13����*/

int main()
{
	int a[8] = {0};
	int sz = sizeof(a) / sizeof(a[1]);
	printf("please enter some number:");
	for ( int i = 0; i < sz; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < sz; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz-1; j++)
		{
			int tem = 0;
			if (a[j] >= a[j + 1])
			{
				tem = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tem;
				flag = 0;
			}
			if (flag == 1)//����Ѿ��Ŷ�˳�򣬾Ͳ��ڽ��бȽϣ�ֱ������ѭ�������㷨
			{
				break;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
