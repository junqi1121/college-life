#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//sscanf���÷���stdio.h��
//int sscanf(const char* buffer, const char* format[, argument] ...);
//��������
//��һ��������һ���ַ�����
//�ڶ��������Ǹ�ʽ������%d��%c��%s�ȣ���������˫���š�
//������������Ҫ�������ĵط���������ָ�룡
//�ú����������ǽ���һ���ַ����е�Ԫ�أ��Եڶ��������е���ʽ������������������
//���������Ŀ�ĵ��ж��������û���ҵ���Ӧ�Ĳ��������տո�tab���������ָ
//����������ǵ����ַ�����ô���ո�tab������Ҳ�ᱻ��������ַ����档
int main()
{
    char b[20]="aaa 20x";
    char a[4];
    int c;
    char d;
    int e;
    char f;
    sscanf(b, "%s%d%c",a,&c,&d);
    printf("%s\n", a);
    printf("%d\n", c);
    printf("%c\n", d);
    
    sscanf(b, "aaa%d%c",&e, &f);
    //��20������c�У���x������d�С�
    printf("%d\n", e);
    printf("%c\n", f);
    return 0;
}





