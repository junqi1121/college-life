#include<stdio.h>
int main()
{
	int a = 10, b = 20;
	int c=swep(&a,&b);
	printf("%d\n%d\n", a, b);
	return 0;
}
int swep(int* x, int* y)
{
	int c = 0;
	c = *x;
	*x = *y;
	*y = c;


}