#include <stdio.h>

//전역변수, 지역변수 사용
//지역변수 - 함수 또는 제어문(조건, 반복) 블럭({}) 내부에서 생성되고
// 		  호출되거나 사용된 후 메모리에서 삭제됨
int x = 1;
int add10(); //함수 선언부 명시
int main() {
	int value;
	value = add10();

	printf("%d\n", value);
	printf("%d\n", x);
	return 0;
}

//어떤 수에 10을 더하는 함수
int add10() {
	int x = 1; //지역변수(local variable)
	x += 10;

	return x;
}