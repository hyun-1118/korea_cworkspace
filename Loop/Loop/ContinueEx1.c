#include <stdio.h>

int main() {
	for (int i = 0; i < 11; i++) {

		if (i % 5 == 0) {
			continue;
		}

		printf("%d\n", i);
	}
	int n = 0;
	int sum = 0;
	for ( n = 1, sum = 0; n < 11; n++) {
		if (n % 2 != 0) 
			continue;
		sum += n;
		printf("%d\n", n);
	}
	printf("%d", sum);

	return 0;
}