#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>
int isprime(int x)
{
	if (x < 2)
	{
		return 0;
	}
	if (x >= 2)
	{
		for (int i = 2; i <= sqrt(x); i++)
		{
			if (x % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}
void divide_number(int x)
{
	int i = 2;
	while(1)
	{
		if (isprime(i))
		{
			if (x % i == 0)
			{
				printf("%d*", i);
				x = x / i;
				if (isprime(x))
				{
					printf("%d", x);
				}
				else
				{

					divide_number(x);
				}
				break;
			}
			if (i >= x)
			{
				break;
			}
		}
		i++;
	}
}


int main()
{
loop: 
	{
	int a;
	printf("������һ��������\n");
	scanf("%d", &a);
	if (isprime(a)||a<2)
	{
		printf("�������ǲ���һ�����������������룡\n");
		goto loop;
	}
	else
	{
		printf("%d=", a);
		divide_number(a);
		printf("\n");
		rechoose:{
			printf("�밴��Ӧ�����Լ�����رճ���\n");
			printf("**�ո�.�˳�����**\n");
			printf("**enter.��������**\n"); }
		char a = _getch();
		if (a == ' ')
		{
			printf("���˳���\n");
			return 0;
		}
		else if(a==13) {
			goto loop;
		}
		else {
			printf("ѡ�����������ѡ��\n");
			goto rechoose;
			
		}
	
	}
	return 0;
	}
}