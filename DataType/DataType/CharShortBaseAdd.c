#include <stdio.h>

int CharShortBaseAdd(void)
{
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;
	
	printf("size of num1 & num2: %d %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d %d \n", sizeof(num3), sizeof(num4));

	printf("size of char add: %d \n", sizeof(num1 + num2));
	printf("size of short add: %d \n", sizeof(num3 + num4));
	//char, short���� ���Ҷ� int������ ����ϱ� ������ int�� ������ ũ�Ⱑ ��µȴ�.

	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of reult1 & reult2: %d, %d \n", sizeof(result1), sizeof(result2));
	return 0;
}