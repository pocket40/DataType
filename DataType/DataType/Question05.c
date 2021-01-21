#include <stdio.h>

int Q05(void)
{
	char ch;
	printf("아스키 문자 입력: ");
	scanf_s("%c", &ch);
	printf("%d", ch);
	return 0;
}