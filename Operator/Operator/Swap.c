#include <stdio.h>

int main() {

	//변수값 교환하기
	//'=' - 대입 연산자
	int x = 1;
	int y = 2;
	int temp; //교환을 위한 변

	printf("=== 교환전 ===");
	printf("x = %d, y = %d\n", x, y);
	
	//교환
	temp = x;
	x = y;
	y = temp;

	printf("=== 교환후===");
	printf("x = %d, y = %d\n", x, y);

	printf("\n");
	//복합 대입 연산자 -> 산술 연산자 + 대입 연산자

	int val = 10;

	//val = val + 3;
	val += 3;
	printf("%d\n", val);

	//val = val - 3;
	val -= 3;
	printf("%d\n", val);

	//val = val * 3;
	val *= 3;
	printf("%d\n", val);

	//val = val / 3;
	val /= 3;
	printf("%d\n", val);

	//val = val % 3;
	val %= 3;
	printf("%d\n", val);


	return 0;
}