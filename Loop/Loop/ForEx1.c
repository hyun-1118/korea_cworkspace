#include <stdio.h>
/*
	for(초기값; 종료값; 증감값){
	실행문;
	}
*/
int main() {
	/*for (int i=1; i<= 10; i++) {
		printf("%d ", i);
	}*/

	//1+2+...+10
	int sum = 0;
	int n;
	//for (n = 1; n < 11; n++) {
	//	sum += n;
	//	printf("n =%d, sum = %d\n",n, sum);
	//}
	//printf("n=%d, sum = %d\n", n, sum);

	

	for (n = 1; n < 11; n++) {
		if (n % 2 != 0) {
			sum += n;
		}
		printf("n =%d, sum = %d\n", n, sum);
	}
	printf("n=%d, 홀수의 합계: %d\n", n, sum);
	
		
		return 0;
}