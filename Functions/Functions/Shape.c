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
	printf("정사각형의 넓이: %dcm\n", rectArea);

	double triArea;
	triArea = triangle(3, 5);

	printf("정삼각형의 넓이: %lfcm\n", triArea);
	return 0;
}