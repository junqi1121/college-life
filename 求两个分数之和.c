#include<stdio.h>
int main()
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter first fraction:");
	scanf_s("%d/%d",&num1,&denom1);
	printf("Enter second fraction:");
	scanf_s("%d/%d",&num2,&denom2);
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum of two fractions is %d/%d",result_num,result_denom);
	return 0;
}