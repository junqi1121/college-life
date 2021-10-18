#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*求斐波那契数列的第n项*/
/*斐波那契数列：1、1、2、3、5、8、13……*/
//但是此程序效率执行特别差人，进行了许多重复计算
//如n=50时，就要计算n=49和n=48，而算48,49，又需要计算两个值。那么总计算次数是2^50次！
//重复计算次数太多
int fibonacci(x)
{
	if (x >= 3)
		return fibonacci(x - 1) + fibonacci(x - 2);
	else
		return 1;

}
int main()
{
	int n = 0;
	printf("Please enter a positive number:");
	scanf("%d",&n);
	int a = fibonacci(n);
	printf("The No.%d number of fibonacci seqence is %d",n,a);
	return 0;
}
