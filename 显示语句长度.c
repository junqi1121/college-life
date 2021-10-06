#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
int main()
{
	int m = 0;
	char ch;
	printf("please enter a message:");
	do {
		ch = getchar();
		m++;

	} while (getchar ()!= '\n');
	printf("this message has %d characters.",m);
	return 0;
}