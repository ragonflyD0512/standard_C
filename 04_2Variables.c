#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	printf("x = %d입니다.\n", x);
	printf("y = %d입니다.\n", y);
	printf("x + y = %d\n", x + y);
	printf("x - y = %d\n", x - y);
	printf("x * y = %d\n", x * y);
	printf("x / y = %d\n", x / y); // int형으로 나누었을때 몫만 출력된다. : 0
	printf("x %% y = %d\n", x % y); // 나머지 : 10
	return 0;
}