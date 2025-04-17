#include  <stdio.h>

int main() {
	/*
		산술 연산자 - + , - , * , / , % , ++ , --
	*/
	int a = 99;
	int b = 2;

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%.1lf\n", (double)a / b); //강제(명시적) 형변환(Type Conversion)
	printf("%d\n", a % b);

	printf("\n");

	//증감 연산자 - ++(1증가) , --(1감소)
	// +==2 (2증가)
	printf("%d\n", a++);  //후치 연산  -> a = a + 1
	printf("%d\n", a);   //100

	printf("\n");
	
	printf("%d\n", ++a);  //전치 연산자  -> a = a + 1
	printf("%d\n", a);   //101

	printf("\n");


	printf("%d\n", --a); //후치 연산  -> a = a - 1
	printf("%d\n", a);   //100

	printf("\n");

	printf("%d\n", a--); ///전치 연산자  -> a = a - 1
	printf("%d\n", a);   //99
	

	return 0;
}