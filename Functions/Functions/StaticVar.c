#include <stdio.h>

/*
	���� ����(������) -  static�� ���� �տ�  ����
	-���� �����ϰ� �����ϰ� ���α׷��� ����Ǹ� �Ҹ�
*/

void call() {
	static int x = 0;

	x += 1;

	printf("���� ȣ���� %d��°�Դϴ�.\n", x);

}

int main() {
	call();
	call();
	return 0;
}