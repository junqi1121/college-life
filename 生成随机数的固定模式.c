#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*生成随机数的程序*/
int main()
{	/*时间戳：当前计算机的时间与1970年1月1日0时0分0秒的差值换算成秒*/
	/*srand是用来确定rand的生成起点，如果起点一直在变化，再加上随机数的生成程序，就可以生成随机数*/
	srand((unsigned)time(NULL));//最好放在主程序的前面部分，以免每次启动都重新设置，避免启动时间接近时，生成的数字相同！
	/*time()是一个获取系统时间后再将其返回成整型的函数,要引用time.h NULL是一个空指针*/
	int a=rand();
	/*rand是生成随机数的函数，实际上是一个伪随机数（周期特别长的函数），可近似看成随机数*/
	/*它的函数表达式是固定的*/
	/*需要引用stdlib*/
	/*RAND_MAX是rand函数生成数的最大值十六进制值为7FFF*/
	int b = a % 100 + 1;
	/*一个随机数除以100的值是0—99，再加一就实现了生成1—100的随机数*/
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}