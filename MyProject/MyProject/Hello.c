#include <stdio.h>
/*
	���α׷���: Hello~ World�� ����ϴ� ���α׷�
	�ۼ���: ������
*/
int main()
{
	//��� �Լ� - printf()
	//������ ���� �ʼ������� ; ���� ����
	//'\n'= �ٹٲ� Ư������
	//���ڿ� ��� - �ֵ���ǥ�� ����
	//���Ĺ��� - %s�� ���
	printf("Hello~ World\n");
	printf("�ȳ�~ �����\n");
	printf("%s\n", "Hello~World");
	//�� ���� - Ȭ����ǥ ���
	//���Ĺ��� - %c�� ���
	printf("C��� ������ %c�Դϴ�.\n", 'A');
	//���� - ����(%d), �Ǽ�(%f)
	printf("%d\n", 10);
	printf("%.2f\n", 2.54);

	printf("%d\n", 4 + 5);
	printf("%d\n", 4 - 5);
	printf("%d\n", 4 * 5);
	printf("%f\n", (4.0 / 5.0));
	printf("%d\n",4 % 5);

	return 0;
}