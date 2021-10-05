#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double x;
	double y = 0.0;
	for (;;)
	{
		printf("please enter a number:");
		scanf("%lf", &x);
		if (x >y)
			y = x;
		else
			y=y;
		if (x <= 0)
		{
			printf("%lf", y);
			break;
		}
	}


	return 0;
}
