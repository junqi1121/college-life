#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*函数的递归来实现显示数字的每一位数*/
/*套娃！*/
void weights(int x)
{
	if (x > 9)
	{
		weights(x / 10);
	}
	printf("%d  ", x % 10);
}
int main()
{
	int a = 0;
	printf("Please enter a number:");
	scanf("%d",&a);
	weights(a);
	return 0;
}