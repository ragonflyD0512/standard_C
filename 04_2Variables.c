#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	printf("x = %d�Դϴ�.\n", x);
	printf("y = %d�Դϴ�.\n", y);
	printf("x + y = %d\n", x + y);
	printf("x - y = %d\n", x - y);
	printf("x * y = %d\n", x * y);
	printf("x / y = %d\n", x / y); // int������ ���������� �� ��µȴ�. : 0
	printf("x %% y = %d\n", x % y); // ������ : 10
	return 0;
}