#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<errno.h>
#include<Windows.h>
//strerror������ʹ��
int main()
{
	//strerror ������Ϣ���溯��
	//char *strerror(int errnum)
	//�ú�������һ��ָ������ַ�����ָ�룬�ô����ַ��������˴��� errnum��Ӧ�ľ�������
	FILE* fp;
	fp = fopen("file.txt", "r");
	if (fp==NULL)
	{
		printf("Error: %s\n", strerror(errno));
	}
	printf("***************************************************************************\n");//�ֽ���
	//���ϲ������Զ���Ȩ�޴�һ�������ڵ��ļ�����ô���ͻ᷵�ش����ԭ��
	//������Ĵ�������ɶ�Ӧ���ַ�����Ҫ����<errno.h>
	//������빲��140������
	for (int i = 1; i <= 140; i++)
	{
		printf("%d %s\n",i, strerror(i));
		Sleep(100);
	}
	return 0;
}