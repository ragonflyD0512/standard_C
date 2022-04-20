#include <stdio.h>

int main(void)
{
	/* //int형 메모리 크기
	int x;	// 변수 선언	// data type : int(정수형)
	x = 5;	// 변수 초기화
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));
	*/

	int x = 50;
	float y = 123456789.123456789; // float은 4byte까지만 추력이 가능
	double z = 123456789.123456789;
	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.2f\n", z);
	return 0;
}