#include <stdio.h>

int main()
{
	int a=0 ,b=0;
	while (b <= 100)
	{
		a += b;
		b++;
	}
	printf("%d",a);
	return 0;
}