#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strtok������ʹ��
int main()
{
	//1.strtok
	char a[17] = "abc abcd.abc efg";
	char b[3] = " .";
	//char *strtok(char *str, const char *delim)
	//strtok���ڵ�һ���ַ������ҵڶ����ַ�����Ԫ�س��ֵ�λ�ã�Ȼ�󽫸�λ�øĳ�'\0'
	//��һ��ʹ�ô���Ĳ������ַ����ĵ�ַ�����ص�Ҳ���ַ����ĵ�ַ��ʹ�ú���������Ὣ�ող��ҵ���λ�ü�¼����
	//�ڶ�����ʹ��ʱ����Ҫ����Ĳ����ǿ�ָ�룬�ַ�����Ӹղż�¼��λ�ÿ�ʼ���ң����ص�һ�μ�¼��λ�ã������ڶ��β��ҵ���λ�ü�¼�£�ֱ������'\0'
	//�����ⲻ������ֵ��NULL
	printf("%s\n", strtok(a, b));
	printf("%s\n", a);//��ʱ��ӡaΪabc����Ϊ��һ���ո񴦱��ĳ��ˡ�\0'
	printf("***********************\n");//�˴�ӡΪ�ָ�����
	char c[17] = "abc abcd.abc efg";
	char d[3] = " .";
	//�ֶ��ʹ�ã���c���տո�͵�Ϊ�ָ������ָ��ӡ��
	char* p = NULL;
	for (p = strtok(c,d); p!=NULL;p=strtok(NULL,d))
	{
		printf("%s\n", p);
	}
	//��һ��Ϊ��ʼ������ɵ�һ�ηָ
	//��Ϊstrtok�ڼ�⵽'\0'ʱֹͣ������ѭ����������p=NUll��
	//���һ����������p�ĵݱ䣬����ǡ��ʵ���˺�����
	return 0;
}