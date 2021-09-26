#include <stdio.h>

#include <math.h>

int main()
{
	float a, b, c;

	printf("请输入所求三角形的三边长：");

	scanf("%f%f%f",&a,&b,&c);

	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)

	{
		float p = (a + b + c) / 2;

		float s = sqrt(p * (p - a) * (p - b) * (p - c));

		printf("这个三角形的面积为:%f",s);
	}

	else
	{
		printf("请输入正确的数值");
	}

	return 0;
}