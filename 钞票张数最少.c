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

	printf("��ֵΪ20ʹ�õ�����Ϊ��%d\n",b1);

	printf("��ֵΪ10ʹ�õ�����Ϊ��%d\n",c1);

	printf("��ֵΪ5ʹ�õ�����Ϊ��%d\n",d1);

	printf("��ֵΪ1ʹ�õ�����Ϊ��%d\n",d2);


	return 0;

}