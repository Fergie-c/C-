#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
	
	int a, b, c, d;

	printf("ù��° ���� ���� �Է��Ͻÿ� :");
	scanf_s("%d", &a);
	printf("�ι�° ���� ���� �Է��Ͻÿ� :");
	scanf_s("%d", &b);
	printf("����° ���� ���� �Է��Ͻÿ� :");
	scanf_s("%d", &c);
	printf("�׹�° ���� ���� �Է��Ͻÿ� :");
	scanf_s("%d", &d);

	int count_over100 = 0;
	if (a >= 100)
		count_over100++;
	if (b >= 100)
		count_over100++;
	if (c >= 100)
		count_over100++;
	if (d >= 100)
		count_over100++;
	printf("\n1. ū ��(100 �̻��� ����) ���� : %d, ", count_over100);

	int count_100 = 0;
	if (a >= 0 && a < 100)
		count_100++;
	if (b >= 0 && b < 100)
		count_100++;
	if (c >= 0 && c < 100)
		count_100++;
	if (d >= 0 && d < 100)
		count_100++;
	printf("���� ��(0 �̻� 100 �̸��� ����) ���� : %d\n", count_100);

	if (count_over100 > count_100)
		printf("\n2. ū �� ������ ���� �� �������� %d�� �� ����\n", count_over100 - count_100);
	else if (count_over100 < count_100)
		printf("\n2. ���� �� ������ ū �� �������� %d�� �� ����\n", count_100 - count_over100);
	else
		printf("\n2. ū �� ������ ���� �� ������ ����\n");

	int x = 0; 
	double sum = 0;
	printf("\n3. �������� ������ �Էµ� ��� ���� ���\n");
	if (a >= 0) {
		x++;
		sum = a;
	}
	if (b >= 0) {
		x++;
		sum += b;
	}
	if (c >= 0) {
		x++;
		sum += c;
	}
	if (d >= 0) {
		x++;
		sum += d;
		double average = sum / x;
		printf("1) �������� ������ �Էµ� ��� ������ �հ� : %d\n", (int)sum);
		printf("2) �������� ������ �Էµ� ��� ������ ��� : %lf\n", average);
	}
	else
		printf("�Էµ� ��� ���ڰ� �������̾ ����� �����ϴ�.\n");

	printf("\n4. ���������� �Էµ� ���� ���\n");
	int sum2 = 0;
	if (a < 0)
		sum2 += a;
	if (b < 0)
		sum2 += b;
	if (c < 0)
		sum2 += c;
	if (d < 0)
		sum2 += d;
	if (sum2 < 0)
		printf("���������� �Էµ� ��� ������ �հ� : %d", sum2);
	else
		printf("�Էµ� ��� ���ڰ� 0�̻��� ���̾ ����� �����ϴ�.\n");

	return 0;
} 