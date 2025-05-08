#include <stdio.h>

int main() {

	char msg[6] = {'h','e','l','l','o'};

	printf("%c\n", msg[4]);

	msg[0] = 'y';
	msg[5] = 'w';

	for (int i = 0; i < 6; i++) {
		printf("%c ", msg[i]);
	}
	printf("\n");
	printf("%x %x %x\n", &msg[0], &msg[1], &msg[2]);
	printf("%x %x %x\n", msg, msg + 1, msg + 2);

	return 0;
}