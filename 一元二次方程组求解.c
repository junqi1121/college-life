#include <stdio.h>
#include<math.h> 
int main()
{
	float a=0, b=0, c=0, derta=0;
	printf("请将方程整理成标准形式ax^2+bx+c=0\n");
	printf("请输入方程的二次项系数a：\n");
	scanf("%f",&a);
	printf("请输入方程的一次项系数b：\n");
	scanf("%f",&b);
	printf("请输入方程的常数项c：\n");
	scanf("%f",&c);
	derta = b * b - 4 * a * c;
	if (derta < 0)
	{
		printf("该方程无解!");
	}
	else
	{
		float x1, x2;
		x1 = (-b+ sqrt(derta))/ (2*a);
		x2 = (-b - sqrt(derta))/(2*a);
		printf("该方程的两个根为x1=%f , x2=%f",x1,x2);
	}
	return 0;
}
