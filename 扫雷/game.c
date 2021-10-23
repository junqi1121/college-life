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
	//��ӡ�к�
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
	{//��ӡ�к�
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
	int right = strlen(a) - 1;/*strlen()�������ַ����ĳ��ȣ���Ҫ����string.hͷ�ļ�*//*���������ĳ��ȿ�����sizeof����ķ��������ַ���������һ�����ص�'\0'*/
	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];
		printf("%s\n", b);
		Sleep(100);/*ÿ����ʾ��ͣ��1000���룬��Ҫ����ͷ�ļ�windows.h*/
		system("cls");/*cls:clear screen,�����Ļ�ϸղ���ʾ�����ݣ�Ҳ��Ҫ��windows.h*/
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
		printf("��������Ҫ�Ų������(x��y)");
		scanf("%d%d", &y, &x);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.������
			if (a[x][y] == '1')
			{
				myprint("���ź��㱻ը���ˣ�");
				displayboard(b, ROW, COL);
				displayboard(a, ROW, COL);
				break;
			}
			else//û���ף�ͳ���׵ĸ���
				systemreset(a, b, x, y, &win, ROW, COL);			
		}
		else
		{
			printf("����Ƿ������������룡");
		}
	}
	if (win == row * col - BOMB)
	{
		myprint("��ϲ��ɨ�׳ɹ��ˣ�");
		displayboard(b, ROW, COL);
		displayboard(a, ROW, COL);
	}
}