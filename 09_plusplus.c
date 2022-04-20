#include <stdio.h>

int main(void)
{
	int x = 0;								
	printf("현재 x의 값은 %d입니다.\n", x++);	// 0
	printf("현재 x의 값은 %d입니다.\n", x--);	// 1	
	printf("현재 x의 값은 %d입니다.\n", x);		// 0
	printf("현재 x의 값은 %d입니다.\n", --x);		// 0
	return 0;
}