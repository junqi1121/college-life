#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort������ʹ�ã���stdlib.h�У����Կ��������ԭ��ʵ��
//void qsort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*))
//base -- ָ��Ҫ���������ĵ�һ��Ԫ�ص�ָ�롣
//nitems -- �� base ָ���������Ԫ�صĸ�����
//size -- ������ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//compar -- �����Ƚ�����Ԫ�صĺ���������һ������ָ�룬Ҫ�ϸ������Ӧ�ĺ�����ʽд
//���ĸ�������д���ȽϷ����������ķ���ֵһ��Ҫ��int,���ܵ���������һ��Ҫ������const void*
//��ǰ����ָԪ�ش��ں����򷵻ش������ֵ��С�ں����򷵻�С�����ֵ����ͬ�򷵻�0;(��С��������)
//void*��ָ��ֱ�ӽ����û��߼Ӽ���Ҫǿ������ת���ɶ�ӦԪ�ص�ָ�룻
struct stu
{
	char name[10];
	int age;
	int grade;
};
int cmpint(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int cmpfloat(const void* a, const void* b)
{
	return (*(float*)a) - (*(float*)b);
}
int cmpstu_by_age(const void* a, const void* b)
{
	return (((struct stu*)a)->age) - (((struct stu*)b)->age);
}
int cmpstu_by_grade(const void* a, const void* b)
{
	return (((struct stu*)a)->grade) - (((struct stu*)b)->grade);
}
int cmpstu_by_name(const void* a, const void* b)
{
	return strcmp(((struct stu*)a)->name, ((struct stu*)a)->name);
}
int main()
{	//�����������������
	int a[16] = { 4, 11, 17 ,8 ,19,7, 5, 1, 0, 10, 3, 18, 2, 14 ,6, 9 };
	printf("Before qsort:");
	for (int i = 0; i < 16; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), cmpint);
	printf("After qsort:");
	for (int i = 0; i < 16; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("/************�ָ���****************/\n");
	/*************************�ָ���**********************************************/
	//���ڸ�������������
	float b[] = { 3.6 ,7.8,1.2,0.6,10.9,8.9,5.6 };
	printf("Before qsort:");
	for (int i = 0; i < sizeof(b)/sizeof(b[0]); i++)
	{
		printf("%.2f ", b[i]);
	}
	printf("\n");
	qsort(b, sizeof(b) / sizeof(b[0]), sizeof(b[0]), cmpfloat);
	printf("After qsort:");
	for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++)
	{
		printf("%.2f ", b[i]);
	}
	printf("\n");
	printf("/************�ָ���****************/\n");
	/*************************�ָ���**********************************************/
	//�ṹ�������
	struct stu s[3] = { {"John",21,79} ,{"Bob",20,100},{"Anny",18,90}};
	printf("Before qsort:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
	}
	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmpstu_by_age);
	printf("����������:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
	}
	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmpstu_by_grade);
	printf("���ɼ�����:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
	}
	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmpstu_by_name);
	printf("����������:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
	}
	return 0;
}