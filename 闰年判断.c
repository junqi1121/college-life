#include<stdio.h>
int main()
{
	int year = 0;
	printf("��������ݴ���:");
	scanf("%d",&year);
	if (year % 100 != 0 && year %4== 0)
	{
		printf("�������꣡");
	}
	else
	{
		if (year % 100 == 0 && year % 400 == 0)
		{
			printf("�������꣡");
		}
		else
		{
			printf("�ⲻ�����꣡");
		}

	}

	return 0;
}