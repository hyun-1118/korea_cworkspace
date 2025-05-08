#include <stdio.h>
#include <math.h>

int main() {

	//반올림
	printf("%.1f\n", round(2.54));
	printf("%.1f\n", round(2.14));

	printf("\n");

	//내림
	printf("%.lf\n", floor(2.54));
	printf("%.lf\n", floor(2.14));

	printf("\n");

	//올림
	printf("%.lf\n", ceil(2.54));
	printf("%.lf\n", ceil(2.14));

	printf("\n");

	//절대값
	printf("%d\n", abs(-3));
	printf("%d\n", abs(2));

	printf("\n");

	//거듭제곱
	printf("%.lf\n", pow(2, 4));
	printf("%.lf\n", pow(10, 3));

	printf("\n");

	//제곱근
	printf("%.lf\n", sqrt(16));
	printf("%.lf\n", sqrt(9));

	return 0;
}