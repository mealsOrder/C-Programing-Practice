/*
	����ڷκ��� ������ �Է¹��� ����, 2���� 8���� 16������
	����ϴ� ���α׷��� �ۼ��Ͻÿ�
	�ۼ��� : ������
*/
#include<stdio.h>
#pragma warning(disable: 4996)


void binaryChange(int num1);
int main() {
	int num1 = 0;

	printf("������ �Է��ϼ���.");
	scanf("%d", &num1);
	
	printf("2����: ");
	binaryChange(num1);
	printf("\n8����: %#o\n16����: %#x\n",num1,num1);
	//o�� 8���� x�� 16������ ��Ÿ����.
	//#o �� ����ϸ� ����ǥ�ø� ���ִ� ���ڵ��� ����� ���·� ��µȴ�!


	getchar(); getchar();
	return 0;
}

//10���� 2������ ��ȯ �ϴ� �Լ�
void binaryChange(int num1) {
	int i;
	
	for (i = 31; i >= 0; i--) {
		printf("%d", (num1 >> i) & 1); 
		// >> ����Ʈ ������
		// num1�� ��Ʈ�� ���� i��ŭ �������� �̵�
	}
	
}

//10������ 8������ ��ȯ �ϴ� �Լ�
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

//10������ 16������ ��ȯ �ϴ� �Լ�
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


