#include <stdio.h>

int Q01(void)
{
	printf("��ǥ�� �Է��ϼ���.");
	int xpos1, ypos1;
	int xpos2, ypos2;
	int area;

	printf("�� ����� x,y ��ǥ: ");
	scanf_s("%d %d", &xpos1, &ypos1);
	printf("�� �ϴ��� x, y ��ǥ: ");
	scanf_s("%d %d", &xpos2, &ypos2);
	area = (xpos2 - xpos1) * (ypos2 - ypos1);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n", area);
	return 0;
}