#include <stdio.h>

int main(void)
{
	/* //int�� �޸� ũ��
	int x;	// ���� ����	// data type : int(������)
	x = 5;	// ���� �ʱ�ȭ
	printf("���� x�� �޸� ũ��� %d�Դϴ�.", sizeof(x));
	*/

	int x = 50;
	float y = 123456789.123456789; // float�� 4byte������ �߷��� ����
	double z = 123456789.123456789;
	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.2f\n", z);
	return 0;
}