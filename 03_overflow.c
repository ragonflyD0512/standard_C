#include <stdio.h>
#include <limits.h>

int main(void)
{
	int x = INT_MAX; // int의 최댓값
	printf("int형의 최댓값 x는 %d입니다.\n", x); 
	printf("x + 1은 %d입니다.\n", x + 1); 
	/*
		data type : int
		최솟값 : -2147483648 최댓값 : 2147483647
		int형의 최댓값에 +1을 하므로서
		표현할 수 있는 최댓값을 넘어서
		한바퀴 돌아서 최솟값이 출력된다.
	*/

	return 0;
}