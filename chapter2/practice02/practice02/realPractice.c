/*
	변수를 선언하고 변수의 값을 입력받아 출력하는 프로그램
	작성자 : 장윤재

#include<stdio.h>
#pragma warning(disable: 4996)

int main() {
	char let;
	int a=0;
	float b=0;

	printf("문자를 입력하세요.");
	scanf("%c", &let);

	printf("정수를 입력하세요.");
	scanf("%d", &a);

	printf("실수를 입력하세요.");
	scanf("%f", &b);

	printf("문자: %c, 정수: %d, 실수: %f", let, a, b);

	getchar(); getchar();
	return 0;
}
*/