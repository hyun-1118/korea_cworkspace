#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
	time_t ct;
	struct tm* now;

	ct = time(NULL);
	now = localtime(&ct);

	printf("%d³â\n", now->tm_year + 1900);
	printf("%d¿ù\n", now->tm_mon + 1 );
	printf("%dÀÏ\n", now->tm_mday );

	return 0;
}