#include <stdio.h>
#include<math.h> 
int main()
{
	float a=0, b=0, c=0, derta=0;
	printf("�����뷽�̵Ķ�����ϵ����\n");
	scanf_s("%f",&a);
	printf("�����뷽�̵�һ����ϵ����\n");
	scanf_s("%f",&b);
	printf("�����뷽�̵ĳ����\n");
	scanf_s("%f",&c);
	derta = b * b - 4 * a * c;
	if (derta < 0)
	{
		printf("�÷����޽�!");
	}
	else
	{
		float x1, x2;
		x1 = (-b+ sqrt(derta))/ (2*a);
		x2 = (-b - sqrt(derta))/(2*a);
		printf("�÷��̵�������Ϊx1=%f , x2=%f",x1,x2);
	}
	return 0;
}