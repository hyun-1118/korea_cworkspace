#include <stdio.h>
#define PI 3.1415
/*
	���(constant) - ����� �� ���� ��
	1. ��ũ�� ���
	2. const �ڷ���

	��ó���� = #include #define -> �ؽ�Ʈ ��ȯ ����
	�����Ϸ� - �������� �޸� ����� ���� ����
*/

int main() {
	const int MIN_NUM = 1; //���
	const int MAX_NUM = 100;
	//MIN_NUM = 0; �� ���� �ȵ�(���Ҵ� X)


	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//���� ���� ���
	int radius = 10;
	//const double PI = 3.1415;
	double area;

	area = PI  * radius * radius;

	printf("%.2lf\n", area);


	return 0;
}