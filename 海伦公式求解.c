#include <stdio.h>

#include <math.h>

int main()
{
	float a, b, c;

	printf("���������������ε����߳���");

	scanf("%f%f%f",&a,&b,&c);

	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)

	{
		float p = (a + b + c) / 2;

		float s = sqrt(p * (p - a) * (p - b) * (p - c));

		printf("��������ε����Ϊ:%f",s);
	}

	else
	{
		printf("��������ȷ����ֵ");
	}

	return 0;
}