#include  <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define RATE_KPH_MPH 1.6093 //��ȯ ���


/*
	KPH(ų�ι���)�� MPH(����)��ȯ

*/
int main() {

	int kph;
	double mph;

	printf("����� ������ �Է��ϼ���[KPH]:");
	scanf_s("%d", &kph);

	//��ȯ: ų�ι��� / ��ȯ���
	mph = kph / RATE_KPH_MPH;

	printf("����� ������ %.2lf[MPH]�Դϴ�.\n", mph);

	return 0;
}