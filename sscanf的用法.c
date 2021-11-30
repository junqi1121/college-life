#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//sscanf的用法在stdio.h中
//int sscanf(const char* buffer, const char* format[, argument] ...);
//三个参数
//第一个参数是一个字符串，
//第二个参数是格式（比如%d，%c，%s等）外面套上双引号。
//第三个参数是要拷贝到的地方。类型是指针！
//该函数的作用是将第一个字符串中的元素，以第二个参数中的形式拷贝到第三个参数中
//如果拷贝的目的地有多个，并且没有找到对应的参数，按照空格，tab，换行来分割。
//如果拷贝的是单个字符，那么，空格，tab，换行也会被拷到这个字符里面。
int main()
{
    char b[20]="aaa 20x";
    char a[4];
    int c;
    char d;
    int e;
    char f;
    sscanf(b, "%s%d%c",a,&c,&d);
    printf("%s\n", a);
    printf("%d\n", c);
    printf("%c\n", d);
    
    sscanf(b, "aaa%d%c",&e, &f);
    //将20拷到了c中，将x拷到了d中。
    printf("%d\n", e);
    printf("%c\n", f);
    return 0;
}





