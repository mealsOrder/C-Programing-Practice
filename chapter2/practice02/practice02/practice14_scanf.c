/*
	������ �ϳ� �Է¹޾Ƽ� �� ���� 10�� ���� ���� ���ؼ� ����ϴ� ���α׷�
	�ۼ��� : ������

#include<stdio.h>
#pragma warning(disable: 4996)
int bobo(int a);
void haha(int a);
int main() {
	int a = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &a);
	printf("%d �Դϴ�.\n", bobo(a));
	haha(a);
	
	getchar(); getchar();
	return 0;
}

//��ȯ���� �ִ� �Լ�
int bobo(int a) {
	return a * 10;
}

//��ȯ���� ���� �Լ�
void haha(int a) {
	printf("%d �Դϴ�.\n",a * 20);
}

*/