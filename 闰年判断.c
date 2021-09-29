#include<stdio.h>
int main()
{
	int year = 0;
	printf("请输入年份代码:");
	scanf("%d",&year);
	if (year % 100 != 0 && year %4== 0)
	{
		printf("这是闰年！");
	}
	else
	{
		if (year % 100 == 0 && year % 400 == 0)
		{
			printf("这是闰年！");
		}
		else
		{
			printf("这不是闰年！");
		}

	}

	return 0;
}