#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main() {
	/*time_t now;
	now = time(NULL);

	printf("%1970년 1월 1일(0시0분0초)이후 %ld초\n", now);

	printf("%1970년 1월 1일(0시0분0초)이후 %ld일\n", now / (24 * 60 * 60));

	printf("%1970년 1월 1일(0시0분0초)이후 %ld년\n", now / (24 * 60 * 60 * 365));*/

	/*time_t start, end;

	start = time(NULL);
	//1~10
	for (int i = 0; i < 11; i++) {
		printf("%d\n", i);
		Sleep(500);
	}
	end = time(NULL);
	print("ld초 \n", (end - start));
	*/
	clock_t start, end;
	double elapsedTime;

	start = clock();
	for (int i = 0; i < 11; i++) {
		printf("%d\n", i);
		Sleep(500);
	}
	end = clock();

	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("%.2lf초", elapsedTime);

	return 0;
}