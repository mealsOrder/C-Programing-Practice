/*
	정수를 하나 입력받아서 그 값에 10을 곱한 값을 구해서 출력하는 프로그램
	작성자 : 장윤재

#include<stdio.h>
#pragma warning(disable: 4996)
int bobo(int a);
void haha(int a);
int main() {
	int a = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &a);
	printf("%d 입니다.\n", bobo(a));
	haha(a);
	
	getchar(); getchar();
	return 0;
}

//반환형이 있는 함수
int bobo(int a) {
	return a * 10;
}

//반환형이 없는 함수
void haha(int a) {
	printf("%d 입니다.\n",a * 20);
}

*/