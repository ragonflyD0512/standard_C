#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	// and 연산자 // 둘다 참이어야 true 반환
	printf("x가 y보다 크고 y는 40미만입니까? %d\n", (x > y) && (y < 40));
	// or 연산자 // 둘 중 하나라도 참일경우 true 반환
	printf("x가 y보다 작거나 y가 30입니까? %d\n", (x < y) || (y == 30));
	// 부정 연산자
	printf("x가 50이 아닙니까? %d\n", x != 50);
	return 0;
}