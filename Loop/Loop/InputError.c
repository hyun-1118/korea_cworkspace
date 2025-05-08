#include <stdio.h>

int main() {
	int num;
	//printf("숫자를 입력하시오: ");
	//scanf_s("%d", &num);

	//printf("%d\n", num);

	char ch;
	//printf("1개의 문자 입력: ");
	//ch = getchar();
	//printf("입력한 문자: %c", ch);

	//int ch2;
	//printf("1개의 문자 입력: ");
	//ch2 = getchar();
	//printf("입력한 문자: %c", ch2);

	while (1) {
		printf("1개의 문자 입력: ");
		if (scanf_s("%d", &num) == 1) {

			printf("%d\n", num);
			break;
		}
		while (getchar() != '\n');
		printf("잘못된 입력입니다. 숫자를 입력하세요.\n");
	}

	return 0;
}