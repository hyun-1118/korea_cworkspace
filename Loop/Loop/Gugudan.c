#include <stdio.h>

int main() {
	int dan;
	printf("���� �Է��Ͻÿ�: ");
	scanf_s("%d", &dan);
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}
}
