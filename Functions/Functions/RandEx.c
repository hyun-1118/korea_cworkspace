
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	/*int rndVal = rand();
	printf("%d\n", rndVal);*/

	int coin = rand() % 2;
	printf("%d\n", coin);

	if (coin % 2 == 0) {

		printf("�ո�\n");
	}
	else {
		printf("�޸�\n");
	}

	return 0;
}