#include <stdio.h>
#include <limits.h>

int main(void)
{
	int x = INT_MAX; // int�� �ִ�
	printf("int���� �ִ� x�� %d�Դϴ�.\n", x); 
	printf("x + 1�� %d�Դϴ�.\n", x + 1); 
	/*
		data type : int
		�ּڰ� : -2147483648 �ִ� : 2147483647
		int���� �ִ񰪿� +1�� �ϹǷμ�
		ǥ���� �� �ִ� �ִ��� �Ѿ
		�ѹ��� ���Ƽ� �ּڰ��� ��µȴ�.
	*/

	return 0;
}