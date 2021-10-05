/*求两个正整数的最大公约数*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y,z;
	printf("please enter the first number:");
	scanf("%d",&x);
	printf("\nplease enter the second number:");
	scanf("%d", &y);
	if (x >= y)
		z = y;
	else
		z = x;
	for (z = x; z > 0; z--)
		if (x % z == 0&& y % z == 0)
		{
			printf("\nthe greatest common divisor is:%d", z);
			break;
		}
}