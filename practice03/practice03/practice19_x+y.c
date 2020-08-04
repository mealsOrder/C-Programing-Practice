/*
	사용자로부터 정수 x,y를 입력받은 다음 x+y를 출력하는 프로그램을 작성
	작성자 : 장윤재

#include<stdio.h>
#pragma warning(disable: 4996)


int add(int a, int b);
int main() {
	int num1, num2;
	int result = 0;

	printf("정수 x,y 를 입력하세요.");
	scanf("%d%d", &num1, &num2);

	result = add(num1, num2);
	printf("x+y = %d 입니다.", result);

	getchar(); getchar();
	return 0;
}

int add(int a, int b) {
	int result = 0;
	result = a + b;
	return result;
}
*/