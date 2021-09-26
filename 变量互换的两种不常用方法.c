//不允许定义第三个变量完成两个变量值的互换。如a=3，b=5变为a=5 b=3。
#include<stdio.h>
/***************************
*int main()
*{
*	int a = 10, b = 12;
*	printf("%d %d\n",a,b);
*	a = b - a;
*	b= b - a;
*	a = b + a;
*	printf("%d %d", a, b);
*	return 0;
*	
*}
* ****************************\
方法一：通过加减法实现变量交换。缺点是如果输入的两个数据过大或者过小会导致数据溢出*/
//方法二：按位异或的计算
int main()
{
	int a = 10,b=12;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	return 0;
	


}
