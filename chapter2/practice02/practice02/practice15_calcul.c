/*
	�Ǽ��� �ΰ� �Է¹޾Ƽ� �� �Ǽ��� ���ϱ��
	���� ����� ���ؼ� ����ϴ� ���α׷�
	�ۼ��� : ������

#include<stdio.h>
#pragma warning(disable: 4996)

double add(double a, double b);
double sub(double a, double b);

int main() {
	double a, b;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf%lf",&a, &b);
	printf("���ϱ� �����: %f\n", add(a, b));
	printf("���� �����: %f\n", sub(a, b));

	getchar(); getchar();
	return 0;
}

double add(double a, double b){
	return a + b;
}

double sub(double a, double b){
	return a - b;
}

*/