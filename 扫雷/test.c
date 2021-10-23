#include"game.h"
menu()
{
	printf("*********************\n");
	printf("*****1.play  ********\n");
	printf("*****0.exit  ********\n");
	printf("*********************\n");

}
void game()
{
	printf("扫雷游戏！\n");
	//储存雷的信息的表格
	char mine[ROWS][COLS] = {0};
	//界面上展示的表格
	char show[ROWS][COLS] = { 0 };
	//初始化
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');
	//打印棋盘
	//displayboard(mine,ROW,COL);
	displayboard(show, ROW, COL);
	//布置雷
	setmine(mine,ROW,COL);
	displayboard(mine, ROW, COL);
	//扫雷
	findmine(mine,show,ROW,COL);
	
}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}

	} while (input);

}
int main()
{
	test();
	return 0;
}