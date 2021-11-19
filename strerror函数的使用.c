#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<errno.h>
#include<Windows.h>
//strerror函数的使用
int main()
{
	//strerror 错误信息报告函数
	//char *strerror(int errnum)
	//该函数返回一个指向错误字符串的指针，该错误字符串描述了错误 errnum对应的具体内容
	FILE* fp;
	fp = fopen("file.txt", "r");
	if (fp==NULL)
	{
		printf("Error: %s\n", strerror(errno));
	}
	printf("***************************************************************************\n");//分界线
	//以上操作是以读的权限打开一个不存在的文件，那么他就会返回错误的原因。
	//将错误的代码解析成对应的字符串需要引用<errno.h>
	//错误代码共有140个如下
	for (int i = 1; i <= 140; i++)
	{
		printf("%d %s\n",i, strerror(i));
		Sleep(100);
	}
	return 0;
}