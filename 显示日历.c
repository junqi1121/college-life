/*编辑一个日历，由用户来指定一个月的天数和起始日是星期几*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y;
	printf("please enter number of days in month:");
	scanf("%d", &x);
	printf("please enter starting day of the week(1=sun,7=sat):");
	scanf("%d", &y);
	int n = y;
	while(y>1)
	{
		printf("   ");
		y--;

	}
	int i = 1;

	for (i = 1; i <= x; i++)
	{
		printf("%2d ", i);
		n++;
		if (n == 8)
		{
			printf(" \n");
			n = 1;
		}

	}
	return 0;
}