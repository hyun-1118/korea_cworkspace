#include <stdio.h>

int square(int x) {
	int width = x * x;

	return width;
}

double triangle(int x, int h) {
	double width = (double)(x * h) / 2.0;

	return width;
}
int main() {
	int rectArea;
	rectArea = square(4);
	printf("���簢���� ����: %dcm\n", rectArea);

	double triArea;
	triArea = triangle(3, 5);

	printf("���ﰢ���� ����: %lfcm\n", triArea);
	return 0;
}