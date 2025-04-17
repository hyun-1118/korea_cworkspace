#include <stdio.h>

/*
	���� - ���α׷����� �����͸� �����ϴ� �޸� ����
	�ڷ��� - �� ����(char), ����(int), �Ǽ�(double)

	short = 2Byte
	int = 4Byte
	long = 4Byte
	long long = 8Byte
*/
int main()
{
	//���� ���� ��� - �ڷ��� ���� �̸�
	int n1;	//������ ���� ����
	n1 = 5; //���� ����(�ʱ�ȭ,�Ҵ�)
	
	int n2 = 10; //����� ���ÿ� �ʱ�ȭ
	
	//�޸��� �ּ�[&(���ۻ���)- �ּҿ�����]
	printf("%d\t %x\n", n1, &n1);
	printf("%d\t %x\n", n2, &n2);

	printf("\n");

	printf("�� ���� ��: %d\n", n1 + n2);
	printf("�� ���� ��: %d\n", n1 - n2);
	printf("�� ���� ��: %d\n", n1 * n2);
	printf("�� ���� ��: %d\n", n1 / n2);

	printf("\n");

	//�Ǽ��� ���� ����, ���Ĺ��� = %lf(long float)
	double rateOfBirth = 0.75;
	printf("�ѱ��� 2024�� ������� %.2lf �Դϴ�.\n", rateOfBirth);

	printf("\n");

	//������ ���� ����
	char grade = 'A';
	printf("�� ȣ���� ���񽺴� %c����̴�.\n",grade);

	printf("\n");
	
	//���ڿ� ���� ����
	char nameOfFruit[] = "���";
	printf("�� ������ �̸��� %s�Դϴ�.\n", nameOfFruit);

	//���� �̸��� �ǹ̰� �ְ� �����, ī�� ǥ��� ���
	
	/*���� �̸� �ۼ��� ����
	 int 2n = 20;  ���ڷ� ���� �ȵ�

	 int a ge = 25; ����(����) �Ұ�

	 int for = 3;   �����(������ ��ɾ�) ��� �Ұ�
	*/
	
	//�ڷ����� ũ�� - sizeof()
	printf("\n===�ڷ����� ũ��===\n");
	printf("int�� %dByte\n", sizeof(n1));
	printf("double�� %dByte\n", sizeof(rateOfBirth));
	printf("char�� %dByte\n", sizeof(grade));
	printf("���ڿ� �迭�� %dByte\n", sizeof(nameOfFruit));
	return 0;
}