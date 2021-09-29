#include<stdio.h>
int main()
{
	int now,period;
	printf("Please input the time now:");
	scanf("%4d",&now);
	printf("Please input the time that will pass:");
	scanf("%d",&period);
	int x = now / 100;
	int y = now % 100;
	int minuites = x * 60 + y + period;
	int now2 = (minuites / 60) * 100 + minuites % 60;
	printf("The time will be %d",now2);
	return 0;
}
