#include <stdio.h>
#define MONTHS 12 // ��� ���� �� ���� #define ����� �����

int main(void)
{
	double monthSalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS);

	return 0;
}