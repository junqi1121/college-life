#define _CAT_SECURITY_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a;
	int i = 0;
	printf("please scanf a letter:");
	while ((a = getchar())!= '\n')
	{
		
		a = toupper(a);
		switch (a)
		{
		case 'A': case 'E':case 'L':case 'I':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
			i++;
			break;
		case 'D':case 'G':
			i += 2;
			break;
		case 'P':case 'M':case 'C':case 'B':
			i += 3;
			break;
		case 'F':case 'H':case 'V':case 'W':case 'Y':
			i += 4;
			break;
		case 'K':
			i += 5;
			break;
		case 'J':case 'X':
			i += 8;
			break;
		case 'Q':case 'Z':
			i += 10;
			break;
		}
	}
		printf("The scrabble value is %d",i);
		return 0;
}