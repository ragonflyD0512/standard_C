#include <stdio.h>
#define MONTHS 12 // 상수 선언 및 정의 #define 상수명 상수값

int main(void)
{
	double monthSalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS);

	return 0;
}