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
	printf("ɨ����Ϸ��\n");
	//�����׵���Ϣ�ı��
	char mine[ROWS][COLS] = {0};
	//������չʾ�ı��
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');
	//��ӡ����
	//displayboard(mine,ROW,COL);
	displayboard(show, ROW, COL);
	//������
	setmine(mine,ROW,COL);
	displayboard(mine, ROW, COL);
	//ɨ��
	findmine(mine,show,ROW,COL);
	
}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);

}
int main()
{
	test();
	return 0;
}