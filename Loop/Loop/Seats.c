#include <stdio.h>

int main() {
	int customer = 17;
	int column = 4;
	int row;
	int seat;

	printf("입장객 수 입력: ");
	scanf_s("%d", &customer);

	printf("좌석열 수 입력: ");
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
	printf("줄 수: %d\n", row);


	return 0;
}