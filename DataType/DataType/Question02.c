#include <stdio.h>

int Q02(void)
{
	double num1, num2;
	printf("�� ���� �Ǽ� �Է�:");
	scanf_s("%lf %lf", &num1, &num2);

	printf("�� ���� ����: %f", num1 + num2);
	printf("�� ���� ����: %f", num1 - num2);
	printf("�� ���� ����: %f", num1 * num2);
	printf("�� ���� ������: %f", num1 / num2);
	return 0;
}