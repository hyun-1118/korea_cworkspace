#include <stdio.h>

int main() {

	//������ ��ȯ�ϱ�
	//'=' - ���� ������
	int x = 1;
	int y = 2;
	int temp; //��ȯ�� ���� ��

	printf("=== ��ȯ�� ===");
	printf("x = %d, y = %d\n", x, y);
	
	//��ȯ
	temp = x;
	x = y;
	y = temp;

	printf("=== ��ȯ��===");
	printf("x = %d, y = %d\n", x, y);

	printf("\n");
	//���� ���� ������ -> ��� ������ + ���� ������

	int val = 10;

	//val = val + 3;
	val += 3;
	printf("%d\n", val);

	//val = val - 3;
	val -= 3;
	printf("%d\n", val);

	//val = val * 3;
	val *= 3;
	printf("%d\n", val);

	//val = val / 3;
	val /= 3;
	printf("%d\n", val);

	//val = val % 3;
	val %= 3;
	printf("%d\n", val);


	return 0;
}