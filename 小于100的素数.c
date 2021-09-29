#include<stdio.h>
int main()
{
	int a = 2;
	printf("小于100的素数为：");
	for (a = 2; a <= 100; a++)
	{
		int i = 2;
		for (i = 2; i <= a; i++)
		{
			
			if (i==a)
			{
				printf("%d ",a);
			}
			if (a % i == 0)
			{
				break;
			}	
		}
	}
	return 0;
}
