#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	printf("x�� y�� ������ ? %d\n", x == y);	// 1
	printf("x�� y�� ������ ? %d\n", x != y);	// 0
	printf("x�� y���� ū�� ? %d\n", x > y);	// 0
	printf("x�� y���� ������ ? %d\n", x < y);	// 0
	printf("x�� y���� ������ ? %d\n", x = y);	// 0 
	// c���� 0�� false ������ ���� true
	return 0;
}