#include <stdio.h>

int main() {
	//int num1 = 10;
	//int num2 = 20;
	//int num3 = 30;

	//printf("%d %d %d\n", num1, num2, num3);

	//int num[4];
	//num[0] = 10;
	//num[1] = 20;
	//num[2] = 30;
	//num[3] = 40;
	int num[4] = { 10,20,30,40 };

	printf("%d\n", num[0]);

	num[1] = 50;

	for (int i = 0; i < 4; i++) {
		printf("%-3d", num[i]);
	}
	printf("\n");

	printf("%x %x %x\n", &num[0], &num[1], &num[2]);

	printf("%x %x %x\n", num, num+1,  num+2);
	return 0;
}