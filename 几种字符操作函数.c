#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
/*********几种字符操作函数************/
int main()
{	//字符函数的头文件是ctype.h
	//如果参数条件符合就返回真。
	char a = 'B';
	int b[11];
	b[0]=iscntrl(a);//任何控制字符
	b[1]=isspace(a);//空格，换页‘\f’,换行‘\n’,回车‘\r’,水平制表符‘\t’,垂直制表符‘\v’
	b[2]=isdigit(a);//数字0——9
	b[3]=isxdigit(a);//十六进制数字，包括所有十进制数字和大写A-f，小写a—f。
	b[4]=islower(a);//是小写字母a-z
	b[5]=isupper(a);//是大写字母A-Z
	b[6]=isalpha(a);//字母a-z或者A-Z
	b[7]=isalnum(a);//任何字母或数字0-9 a-z A-Z
	b[8]=ispunct(a);//标点符号，任何不属于数字或者字母的圆形字符（可打印）
	b[9]=isgraph(a);//任何图形字符
	b[10]=isprint(a);//任何可打印字符，包括图形字符和空白字符
	//符合条件返回1，不符合条件返回0

	return 0;
}