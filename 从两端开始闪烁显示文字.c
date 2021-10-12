#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char a[] = "welcome to sichuan university!";
	char b[] = "                                ";/*这是一个字符串，里面存放的是空格*/
	int left = 0;
	int right = strlen(a) - 1;/*strlen()用于求字符串的长度，需要引用string.h头文件*//*如果是数组的长度可以用sizeof相除的方法，而字符串后面有一个隐藏的'\0'*/
	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];/*这是要让字符串a的元素从两端开始替代b的元素*/
		printf("%s\n", b);
		Sleep(1000);/*每次显示后停顿1000毫秒，需要引用头文件windows.h*/
		system("cls");/*cls:clear screen,清除屏幕上刚才显示的内容，也需要引windows.h*/
		left++;
		right--;
	}
	printf("Welcome to sichuan university!");
	return 0;
}
