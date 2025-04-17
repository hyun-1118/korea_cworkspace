#include  <stdio.h>

int main() {
	//아스키 코드 - 1Byte(256개)
	char ch = '0';

	printf("%C %d\n", ch, ch);
	printf("%C %d\n", ch+1, ch+1);
	printf("%C %d\n", ch+2, ch+2);


	printf("\n");

	//유니 코드 - 2Byte(65000개)
	char han[] = "가";  //배열 han에 "가" 저장
	char han2[] = "\uAC00";

	printf("%s\n", han);
	printf("%s\n", han2);

	//메모리 주소
	printf("%c %x\n", ch, &ch);
	printf("%s %x\n", han, han);
	printf("%s %x\n", han, &han[0]);

	return 0;
}