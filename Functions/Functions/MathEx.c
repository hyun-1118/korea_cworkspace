#include <stdio.h>
#include <math.h>

int main() {

	//�ݿø�
	printf("%.1f\n", round(2.54));
	printf("%.1f\n", round(2.14));

	printf("\n");

	//����
	printf("%.lf\n", floor(2.54));
	printf("%.lf\n", floor(2.14));

	printf("\n");

	//�ø�
	printf("%.lf\n", ceil(2.54));
	printf("%.lf\n", ceil(2.14));

	printf("\n");

	//���밪
	printf("%d\n", abs(-3));
	printf("%d\n", abs(2));

	printf("\n");

	//�ŵ�����
	printf("%.lf\n", pow(2, 4));
	printf("%.lf\n", pow(10, 3));

	printf("\n");

	//������
	printf("%.lf\n", sqrt(16));
	printf("%.lf\n", sqrt(9));

	return 0;
}