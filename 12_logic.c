#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	// and ������ // �Ѵ� ���̾�� true ��ȯ
	printf("x�� y���� ũ�� y�� 40�̸��Դϱ�? %d\n", (x > y) && (y < 40));
	// or ������ // �� �� �ϳ��� ���ϰ�� true ��ȯ
	printf("x�� y���� �۰ų� y�� 30�Դϱ�? %d\n", (x < y) || (y == 30));
	// ���� ������
	printf("x�� 50�� �ƴմϱ�? %d\n", x != 50);
	return 0;
}