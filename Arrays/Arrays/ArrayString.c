#include <stdio.h>

int main() {
	char fr1[5] = "apple";
	char fr2[6] = "apple";
	char fr3[] = "�ٳ���";

	printf("%s\n", fr1);

	printf("%s\n", fr2);
	
	printf("%s\n", fr3);
	return 0;
}