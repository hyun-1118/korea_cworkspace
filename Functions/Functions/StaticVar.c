#include <stdio.h>

/*
	정적 변수(고정된) -  static을 변수 앞에  붙임
	-값을 유지하고 공유하고 프로그램이 종료되면 소멸
*/

void call() {
	static int x = 0;

	x += 1;

	printf("현재 호출은 %d번째입니다.\n", x);

}

int main() {
	call();
	call();
	return 0;
}