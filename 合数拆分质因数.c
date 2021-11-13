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
	printf("请输入一个合数：\n");
	scanf("%d", &a);
	if (isprime(a)||a<2)
	{
		printf("该数字是不是一个合数，请重新输入！\n");
		goto loop;
	}
	else
	{
		printf("%d=", a);
		divide_number(a);
		printf("\n");
		rechoose:{
			printf("请按相应按键以继续或关闭程序：\n");
			printf("**空格.退出程序**\n");
			printf("**enter.继续输入**\n"); }
		char a = _getch();
		if (a == ' ')
		{
			printf("已退出！\n");
			return 0;
		}
		else if(a==13) {
			goto loop;
		}
		else {
			printf("选择错误！请重新选择。\n");
			goto rechoose;
			
		}
	
	}
	return 0;
	}
}