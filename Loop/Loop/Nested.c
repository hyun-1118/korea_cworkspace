#include <stdio.h>

int main() {
	int i, j;

	/*for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			printf("��");
		}
		printf("\n");
	}*/

	for (int i = 1; i < 6; i++) {
		for (int j = 1; j <=i; j++) {
			printf("*");
			
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 1; i < 6; i++) {
		for (int j = 1; j <= 6-i; j++) {
			printf("*");

		}
		printf("\n");
	}

}