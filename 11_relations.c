#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	printf("x가 y와 같은가 ? %d\n", x == y);	// 1
	printf("x가 y와 같은가 ? %d\n", x != y);	// 0
	printf("x가 y보다 큰가 ? %d\n", x > y);	// 0
	printf("x가 y보다 작은가 ? %d\n", x < y);	// 0
	printf("x에 y값은 넣으면 ? %d\n", x = y);	// 0 
	// c언어에서 0은 false 나머지 수는 true
	return 0;
}