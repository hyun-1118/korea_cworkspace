#include <stdio.h>

int main() {
	int i=1;
	int sum=0;
	while (i) {
		sum += i;
		printf("%d\n", sum);

		if (sum > 100) {
			break;
		}

		i++;
	
	}
	printf("%d", i);


	return 0;
}