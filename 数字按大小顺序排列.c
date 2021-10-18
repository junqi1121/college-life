#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*求斐波那契数列的第n项*/
/*斐波那契数列：1、1、2、3、5、8、13……*/

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
			if (flag == 1)//如果已经排定顺序，就不在进行比较，直接跳出循环，简化算法
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
