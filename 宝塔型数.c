#include<stdio.h>
int main()
{
	int a = 0;
	printf("Please input a number:");
	scanf("%d",&a);
	int i = 1;
	for (i = 1; i <= 5; i++)
	{
		int m = 5 - i;
		while (m > 0)
		{
			printf(" ");
			m--;
		}
		int n = i;
		while (n >0)
		{
			printf("%d ", a);
			n--;
		}
		printf("\n");

	}
	return 0;
}
