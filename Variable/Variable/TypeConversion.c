#include  <stdio.h>

int main() {

	int iNum = 20;
	float fNum = iNum;
	double dNum = 2.54;
	int iNum2;

	printf("%d\n", iNum);
	printf("%.lf\n", fNum);	//20.0
	printf("%.lf\n", iNum+fNum);	//40.0

	//����� ����ȯ(���� ����ȯ)
	//�ڷ����� �Ұ�ȣ�� ���� �ش�(int), (DOUBLE)

	iNum2 = (int)dNum;
	printf("%d\n", iNum2); //2

	dNum = 1.2;
	fNum = 0.9F;

	iNum = (int)dNum + (int)fNum;  //1
	printf("%d\n", iNum); 

	iNum = (int)(dNum + fNum);
	printf("%d\n", iNum);

	return 0;
}