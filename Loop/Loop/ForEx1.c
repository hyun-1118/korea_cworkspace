#include <stdio.h>
/*
	for(�ʱⰪ; ���ᰪ; ������){
	���๮;
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
	printf("n=%d, Ȧ���� �հ�: %d\n", n, sum);
	
		
		return 0;
}