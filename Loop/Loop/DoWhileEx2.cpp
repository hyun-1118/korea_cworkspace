#include <stdio.h>

/*
	숫자를 입력받는데
	-1을 입력하면 종료
*/

int main() {
	int num = -1;
	/*while (num != -1) {
		printf("-1 입력시 종료: ");
		scanf_s("%d", &num);
	}*/

	//do {
	//	printf("-1 입력시 종료: ");
	//	scanf_s("%d", &num);
	//} while (num != -1);

	while (1) {
		printf("-1 입력시 종료: ");
		scanf_s("%d", &num);
		if (num == -1)
			break;
	}

	return 0;
}










