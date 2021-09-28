#include<stdio.h>
int main()
{
    int a[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
    int i = 0;
    while (i < 12)
    {
        printf("%c", a[i]);
        i++;
    }
    return 0;
}
