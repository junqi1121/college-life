#include"game.h"
void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 1;
	//打印列号
	printf("   ");
	for (i = 1; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= col; i++)
	{
		printf("___");
	}
	printf(">x\n");
	for (i = 1; i <= row; i++)
	{//打印行号
		printf("%d| ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf(" >y\n");
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = BOMB;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int bombcount(char a[ROWS][COLS], int x, int y)
{
	return a[x - 1][y] +
		a[x - 1][y - 1] +
		a[x][y - 1] +
		a[x + 1][y - 1] +
		a[x + 1][y] +
		a[x + 1][y + 1] +
		a[x][y + 1] +
		a[x - 1][y + 1] - 8 * '0';
}
void systemreset(char a[ROWS][COLS], char b[ROWS][COLS], int x, int y,int* win,int row,int col)
{
	int count = bombcount(a, x, y);
	if(count==0)
	{
		b[x][y] = '0';
		count = bombcount(a, x-1, y-1);
		b[x-1][y-1] = count + '0';
		count = bombcount(a, x, y-1);
		b[x][y-1] = count + '0';
		count = bombcount(a, x+1, y-1);
		b[x+1][y-1] = count + '0';
		count = bombcount(a, x-1, y);
		b[x-1][y] = count + '0';
		count = bombcount(a, x+1, y); if (count == 0)
		b[x+1][y] = count + '0';
		count = bombcount(a, x-1, y+1); 
		b[x-1][y+1] = count + '0';
		count = bombcount(a, x, y+1); if (count == 0)
		b[x][y+1] = count + '0';
		count = bombcount(a, x+1, y+1); 
		b[x+1][y+1] = count + '0';
		(*win) += 8;
		displayboard(b, row, col);
	}
	else {
		b[x][y] = count + '0';
		displayboard(b, row, col);
		(*win)++;
	}
}
void myprint(char a[])
{
	
	char b[] = "                      ";
	int left = 0;
	int right = strlen(a) - 1;/*strlen()用于求字符串的长度，需要引用string.h头文件*//*如果是数组的长度可以用sizeof相除的方法，而字符串后面有一个隐藏的'\0'*/
	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];
		printf("%s\n", b);
		Sleep(100);/*每次显示后停顿1000毫秒，需要引用头文件windows.h*/
		system("cls");/*cls:clear screen,清除屏幕上刚才显示的内容，也需要引windows.h*/
		left++;
		right--;
	}
	
	printf("%s\n",a);
 }
void findmine(char a[ROWS][COLS], char b[ROWS][COLS], int row, int col)
{
	int x, y = 0;
	int win = 0;
	while (win<row*col-BOMB)
	{
		printf("请输入想要排查的坐标(x，y)");
		scanf("%d%d", &y, &x);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷了
			if (a[x][y] == '1')
			{
				myprint("很遗憾你被炸死了！");
				displayboard(b, ROW, COL);
				displayboard(a, ROW, COL);
				break;
			}
			else//没踩雷，统计雷的个数
				systemreset(a, b, x, y, &win, ROW, COL);			
		}
		else
		{
			printf("坐标非法，请重新输入！");
		}
	}
	if (win == row * col - BOMB)
	{
		myprint("恭喜你扫雷成功了！");
		displayboard(b, ROW, COL);
		displayboard(a, ROW, COL);
	}
}