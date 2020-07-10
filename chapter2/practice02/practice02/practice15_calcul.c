/*
	실수를 두개 입력받아서 두 실수의 더하기와
	빼기 결과를 구해서 출력하는 프로그램
	작성자 : 장윤재

#include<stdio.h>
#pragma warning(disable: 4996)

double add(double a, double b);
double sub(double a, double b);

int main() {
	double a, b;

	printf("실수를 입력하세요: ");
	scanf("%lf%lf",&a, &b);
	printf("더하기 결과는: %f\n", add(a, b));
	printf("빼기 결과는: %f\n", sub(a, b));

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