#include <stdio.h>

int main() {
	int num;
	//printf("���ڸ� �Է��Ͻÿ�: ");
	//scanf_s("%d", &num);

	//printf("%d\n", num);

	char ch;
	//printf("1���� ���� �Է�: ");
	//ch = getchar();
	//printf("�Է��� ����: %c", ch);

	//int ch2;
	//printf("1���� ���� �Է�: ");
	//ch2 = getchar();
	//printf("�Է��� ����: %c", ch2);

	while (1) {
		printf("1���� ���� �Է�: ");
		if (scanf_s("%d", &num) == 1) {

			printf("%d\n", num);
			break;
		}
		while (getchar() != '\n');
		printf("�߸��� �Է��Դϴ�. ���ڸ� �Է��ϼ���.\n");
	}

	return 0;
}