#include <stdio.h>

//��������, �������� ���
//�������� - �Լ� �Ǵ� ���(����, �ݺ�) ��({}) ���ο��� �����ǰ�
// 		  ȣ��ǰų� ���� �� �޸𸮿��� ������
int x = 1;
int add10(); //�Լ� ����� ���
int main() {
	int value;
	value = add10();

	printf("%d\n", value);
	printf("%d\n", x);
	return 0;
}

//� ���� 10�� ���ϴ� �Լ�
int add10() {
	int x = 1; //��������(local variable)
	x += 10;

	return x;
}