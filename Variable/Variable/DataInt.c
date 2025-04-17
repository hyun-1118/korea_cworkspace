#include  <stdio.h>

int main() {
	//진수 표기 - 10진수, 2진수, 16진수

	int num = 10;
	int bnum = 0b1010; //2진수는 접두어 '0b' 를 붙임
	int hNum = 0xA; //16진수는 접두어  '0x' 를 붙임

	printf("%d\n", num);
	printf("%d\n", bnum);
	printf("%d\n", hNum);


	//음수 표기
	//방법 - 1) 1의 보수로 바꿈, 0을 1로+1을 0으로
	int num1 = 0b00000000000000000000000000000101; //5
	int num2 = 0b11111111111111111111111111111011; //-5
	printf("%d\n", num1);
	printf("%d\n", num2);


	return 0;


}