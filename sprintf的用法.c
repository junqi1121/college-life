#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//sprint函数的用法（在stdlib.h中）
// sprintf(char* buffer,constchar*format,[argument,……])
//字符串格式化命令，将格式化的数据写入字符串中，返回值是字符串的长度。
int main()
{	//用法示例1（将字符串格式化，并移接到相应位置）
	/********************************************************************/
	char str[20];
	int len = sprintf(str, "%s world!", "hello");//将hello接到%s的位置
	printf("%s\n", str);
	printf("%d\n", len);
	printf("%d\n", strlen(str));
	//用法示例2
	/********************************************************************/
	printf("/*******************************************************************/\n");
	char a1[3][6];
	int b1[3] = {100,99,77};
	for (int i = 0; i < 3; i++)
	{
		sprintf(a1[i], "%d", b1[i]);
		printf("%s\n", a1[i]);
	}
	//用法示例3
	/********************************************************************/
	printf("/*******************************************************************/\n");
	char a3[6] = "aaaaa";
	sprintf(a3, "%s", "bbb");//将a3格式化，并将后面的东西给a3；
	printf("%s\n", a3);
	return 0;
}