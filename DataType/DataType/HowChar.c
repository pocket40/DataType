#include <stdio.h>

int HowChar(void)
{
	char ch1 = 'A', ch2 = 65;
	char ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch2);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
}