/*
	����ڷκ��� ���� x,y�� �Է¹��� ���� x+y�� ����ϴ� ���α׷��� �ۼ�
	�ۼ��� : ������

#include<stdio.h>
#pragma warning(disable: 4996)


int add(int a, int b);
int main() {
	int num1, num2;
	int result = 0;

	printf("���� x,y �� �Է��ϼ���.");
	scanf("%d%d", &num1, &num2);

	result = add(num1, num2);
	printf("x+y = %d �Դϴ�.", result);

	getchar(); getchar();
	return 0;
}

int add(int a, int b) {
	int result = 0;
	result = a + b;
	return result;
}
*/