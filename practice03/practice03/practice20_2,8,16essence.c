/*
	사용자로부터 정수를 입력받은 다음, 2진수 8진수 16진수로
	출력하는 프로그램을 작성하시오
	작성자 : 장윤재
*/
#include<stdio.h>
#pragma warning(disable: 4996)


void binaryChange(int num1);
int main() {
	int num1 = 0;

	printf("정수를 입력하세요.");
	scanf("%d", &num1);
	
	printf("2진수: ");
	binaryChange(num1);
	printf("\n8진수: %#o\n16진수: %#x\n",num1,num1);
	//o는 8진수 x는 16진수를 나타낸다.
	//#o 로 출력하면 진수표시를 해주는 문자들이 사라진 상태로 출력된다!


	getchar(); getchar();
	return 0;
}

//10수를 2진수로 변환 하는 함수
void binaryChange(int num1) {
	int i;
	
	for (i = 31; i >= 0; i--) {
		printf("%d", (num1 >> i) & 1); 
		// >> 시프트 연산자
		// num1의 비트의 값을 i만큼 왼쪽으로 이동
	}
	
}

//10진수를 8진수로 변환 하는 함수
void octChange(int num1) {
	int i;
	int count;
	for (i = 0; i < 32;i+=3) {
		if ((num1 >> i) > 0) {
			count = i / 3;
		}
	}

	for (i = count * 3; i >= 0; i -= 3) {
		printf("%d", (num1 >> i) & 7);
	}
}

//10진수를 16진수로 변환 하는 함수
void hexChange(int num1) {
	int i;
	int count;
	int hex;

	for (i = 0; i < 32; i += 4) {
		if ((num1 >> i) > 0) {
			count = i / 4;
		}
	}

	for (i = count * 4; i >= 0; i -= 4) {
		hex = ((num1 >> i) & 15);
		if (hex < 10) {
			printf("%d", hex);
		}
		else {
			printf("%c", hex + 55);
		}
	}
}


