#include <stdio.h>
/*
	do~while ��
	-while���� ����
	-�� �ѹ��� ����� �� �ֵ��� �� �� ����Ѵ�.
*/
int main() {

	//1~10
	int n = 1;
	/*while (n < 11) {
		printf("%d ", n);
		n++;
	}*/

	do {
		printf("%d ", n);
		n++;

	} while (n < 11);

	return 0;
}