#include <stdio.h>

int CircleArea(void)
{
	double red;
	double area;
	printf("원의 반지름: 입력: ");
	scanf_s("%lf", &red);
	//double형 데이터를 출력할 때에는 서식문자 %f
	//입력 받을 떄에는 서식문자 %lf를 사용한다.

	area = red * red * 3.1415;
	printf("원의 넓이: %f\n", area);
	return 0;
}