#include <stdio.h>
/*
	do~while 문
	-while문과 유사
	-꼭 한번은 실행될 수 있도록 할 때 사용한다.
*/
int main() {

	//1~10
	int n = 1;
	/*while (n < 11) {
		printf("%d ", n);
		n++;
	}*/

	do {
		printf("%d ", n);
		n++;

	} while (n < 11);

	return 0;
}