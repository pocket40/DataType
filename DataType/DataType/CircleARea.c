#include <stdio.h>

int CircleArea(void)
{
	double red;
	double area;
	printf("���� ������: �Է�: ");
	scanf_s("%lf", &red);
	//double�� �����͸� ����� ������ ���Ĺ��� %f
	//�Է� ���� ������ ���Ĺ��� %lf�� ����Ѵ�.

	area = red * red * 3.1415;
	printf("���� ����: %f\n", area);
	return 0;
}