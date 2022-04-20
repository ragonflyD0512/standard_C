#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("10진수로 출력 : %d\n", x); // 100
	printf("8진수로 출력 : %o\n", x);  // 144
	printf("16진수로 출력 : %x\n", x); // 64
	return 0;

	/*
		숫자 표현 
		1. %d == 10진수 표현
		2. %o == 8진수 표현
		3. %x == 16진수 표현
	*/
}

