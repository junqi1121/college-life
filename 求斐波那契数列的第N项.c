#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*��쳲��������еĵ�n��*/
/*쳲��������У�1��1��2��3��5��8��13����*/
//���Ǵ˳���Ч��ִ���ر���ˣ�����������ظ�����
//��n=50ʱ����Ҫ����n=49��n=48������48,49������Ҫ��������ֵ����ô�ܼ��������2^50�Σ�
//�ظ��������̫��
int fibonacci(x)
{
	if (x >= 3)
		return fibonacci(x - 1) + fibonacci(x - 2);
	else
		return 1;

}
int main()
{
	int n = 0;
	printf("Please enter a positive number:");
	scanf("%d",&n);
	int a = fibonacci(n);
	printf("The No.%d number of fibonacci seqence is %d",n,a);
	return 0;
}
