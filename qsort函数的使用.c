#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort函数的使用（在stdlib.h中），以快速排序的原理实现
//void qsort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*))
//base -- 指向要排序的数组的第一个元素的指针。
//nitems -- 由 base 指向的数组中元素的个数。
//size -- 数组中每个元素的大小，以字节为单位。
//compar -- 用来比较两个元素的函数，这是一个函数指针，要严格按照其对应的函数格式写
//第四个参数是写出比较方法，函数的返回值一定要是int,接受的两个参数一定要是两个const void*
//若前者所指元素大于后者则返回大于零的值，小于后者则返回小于零的值，相同则返回0;(从小到大排序)
//void*的指针直接解引用或者加减；要强制类型转换成对应元素的指针；
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
{	//对于整型数组的排序
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
	printf("/************分割线****************/\n");
	/*************************分割线**********************************************/
	//对于浮点型数组排序
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
	printf("/************分割线****************/\n");
	/*************************分割线**********************************************/
	//结构体的排序
	struct stu s[3] = { {"John",21,79} ,{"Bob",20,100},{"Anny",18,90}};
	printf("Before qsort:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
	}
	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmpstu_by_age);
	printf("按年龄排序:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
	}
	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmpstu_by_grade);
	printf("按成绩排序:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
	}
	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmpstu_by_name);
	printf("按名字排序:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
	}
	return 0;
}