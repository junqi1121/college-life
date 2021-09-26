#include<stdio.h>
//%o和%x分别表示8进制和16进制
int main()
{
    int a = 1234;
    printf("%#0o %#0X", a, a);/*在8进制数的前面显示0，在16进制数前面显示0X。 也叫作数据的前导。*/
    return 0;
   
}