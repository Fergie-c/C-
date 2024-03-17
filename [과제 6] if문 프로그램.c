#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
	
	int a, b, c, d;

	printf("첫번째 정수 값을 입력하시오 :");
	scanf_s("%d", &a);
	printf("두번째 정수 값을 입력하시오 :");
	scanf_s("%d", &b);
	printf("세번째 정수 값을 입력하시오 :");
	scanf_s("%d", &c);
	printf("네번째 정수 값을 입력하시오 :");
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
	printf("\n1. 큰 수(100 이상의 숫자) 개수 : %d, ", count_over100);

	int count_100 = 0;
	if (a >= 0 && a < 100)
		count_100++;
	if (b >= 0 && b < 100)
		count_100++;
	if (c >= 0 && c < 100)
		count_100++;
	if (d >= 0 && d < 100)
		count_100++;
	printf("작은 수(0 이상 100 미만의 숫자) 개수 : %d\n", count_100);

	if (count_over100 > count_100)
		printf("\n2. 큰 수 개수가 작은 수 개수보다 %d개 더 많다\n", count_over100 - count_100);
	else if (count_over100 < count_100)
		printf("\n2. 작은 수 개수가 큰 수 개수보다 %d개 더 많다\n", count_100 - count_over100);
	else
		printf("\n2. 큰 수 개수와 작은 수 개수는 같다\n");

	int x = 0; 
	double sum = 0;
	printf("\n3. 음수값을 제외한 입력된 모든 숫자 통계\n");
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
		printf("1) 음수값을 제외한 입력된 모든 숫자의 합계 : %d\n", (int)sum);
		printf("2) 음수값을 제외한 입력된 모든 숫자의 평균 : %lf\n", average);
	}
	else
		printf("입력된 모든 숫자가 음수값이어서 결과가 없습니다.\n");

	printf("\n4. 음수값으로 입력된 숫자 통계\n");
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
		printf("음수값으로 입력된 모든 숫자의 합계 : %d", sum2);
	else
		printf("입력된 모든 숫자가 0이상의 값이어서 결과가 없습니다.\n");

	return 0;
} 