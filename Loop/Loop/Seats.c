#include <stdio.h>

int main() {
	int customer = 17;
	int column = 4;
	int row;
	int seat;

	printf("���尴 �� �Է�: ");
	scanf_s("%d", &customer);

	printf("�¼��� �� �Է�: ");
	scanf_s("%d", &row);

	if (customer & column == 0) {

		row = customer / column;
	}
	else {
		row = (customer / column) + 1;
	}

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= column; j++) {
			seat = column * i + j;
			if (seat > customer) break;
			printf("%d", column * i + j);
		}
		printf("\n");

	}
	printf("�� ��: %d\n", row);


	return 0;
}