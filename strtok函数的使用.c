#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strtok函数的使用
int main()
{
	//1.strtok
	char a[17] = "abc abcd.abc efg";
	char b[3] = " .";
	//char *strtok(char *str, const char *delim)
	//strtok是在第一个字符串中找第二个字符串中元素出现的位置，然后将该位置改成'\0'
	//第一次使用传入的参数是字符串的地址，返回的也是字符串的地址，使用后，这个函数会将刚刚查找到的位置记录下来
	//第二次再使用时，需要传入的参数是空指针，字符串会从刚才记录的位置开始查找，返回第一次记录的位置，并将第二次查找到的位置记录下，直到遇到'\0'
	//如果检测不到返回值是NULL
	printf("%s\n", strtok(a, b));
	printf("%s\n", a);//此时打印a为abc，因为第一个空格处被改成了’\0'
	printf("***********************\n");//此打印为分割作用
	char c[17] = "abc abcd.abc efg";
	char d[3] = " .";
	//现多次使用，将c按照空格和点为分隔符，分割并打印；
	char* p = NULL;
	for (p = strtok(c,d); p!=NULL;p=strtok(NULL,d))
	{
		printf("%s\n", p);
	}
	//第一处为初始化，完成第一次分割。
	//因为strtok在检测到'\0'时停止，跳出循环的条件是p=NUll；
	//最后一个语句完成了p的递变，并且恰好实现了函数。
	return 0;
}