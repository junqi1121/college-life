#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//快速排序，最坏情况下运行时间是O（n^2）,平均时间是（nlogn），是对冒泡排序的改进。
//排序流程：1、首先设定一个分解值，通过分解值将数组分解成左右两个部分。
//			2、将大于等于的分界值的数据集中到数组的右边，小于的值集中到数组左边
//			3、对于左右两组数，再重复以上相同的操作。
//			4、当左右两组都排好后，整个数组也就排好了。
//一趟快速排序的算法是:
//1）设置两个变量i、j，排序开始的时候：i = 0，j = N - 1；
//2）以第一个数组元素作为关键数据，赋值给key，即key = A[0];
//3）从j开始向前搜索，即由后开始向前搜索(j--)，找到第一个小于key的值A[j]，将A[j]和A[i]的值交换
//4）从i开始向后搜索，即由前开始向后搜索(i++)，找到第一个大于key的A[i]，将A[i]和A[j]的值交换;
//5）重复第3、4步，直到i == j；
//3, 4步中，没找到符合条件的值，即3中A[j]不小于key, 4中A[i]不大于key的时候改变j、i的值，使得j = j - 1，i = i + 1，直至找到为止。
//找到符合条件的值，进行交换的时候i， j指针位置不变。
//另外，i == j这一过程一定正好是i + 或j - 完成的时候，此时令循环结束）。
void quicksort(int x[], int left, int right)//快速排序函数
{
	int key = x[left];
	int i = left, j = right - 1;
	int tem;
	if (i>=j)
	{
		return;
	}//当数组分的足够细时，避免其是空数组。也是为了给递归一个出口，以免其死循环/栈溢出。
	while (i < j)
	{
		if (i == j)//如果i==j代表一趟快排完成，可以跳出循环。
		{
			break;
		}
		while (i<j&&x[j] >= key)
			j--;
		/*一旦查到一个比基准数小的，就把它和基准数互换，也就将他换到了左边*/
		tem = x[i];
		x[i] = x[j];
		x[j] = tem;
		while (i<j&&x[i] < key)
			i++;
		/*此时基准数已经到了右边，一旦发现左边有一个比基准数大的，就将它与基准数互换，也就将它换到了右边*/
		tem = x[i];
		x[i] = x[j];
		x[j] = tem;
	}
	quicksort(x, left, i);//左边数组递归
	quicksort(x, i + 1, right);//右边数组递归
}
int main()
{
	int a[16] = { 12, 11, 17 ,8 ,19,7, 5, 1, 0, 10, 3, 18, 2, 14 ,6, 9};
	printf("Before quicksort:\n");
	for (int i = 0; i < 16; i++)
	printf("%d ", a[i]);
	quicksort(a,0,sizeof(a)/sizeof(a[0]));
	printf("\n");
	printf("After quicksort:\n");
	for(int i=0;i<16;i++)
	printf("%d ", a[i]);
	return 0;
}