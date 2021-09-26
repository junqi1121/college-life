#include <stdio.h>

int main()

{
	int a = 0;

	printf("please enter a dollar amount:");

	scanf_s("%d",&a);

	int b1,b2,c1,c2,d1,d2 ;

	b1 = a / 20;

	b2 = a % 20;

	c1 = b2 / 10;

	c2 = b2 % 10;

	d1 = c2 / 5;

	d2 = c2 % 5;

	printf("面值为20使用的张数为：%d\n",b1);

	printf("面值为10使用的张数为：%d\n",c1);

	printf("面值为5使用的张数为：%d\n",d1);

	printf("面值为1使用的张数为：%d\n",d2);


	return 0;

}