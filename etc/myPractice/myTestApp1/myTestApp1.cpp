// �۵��� ��� �Ǵ��� �𸣽� ���� breakpoint�� ��ư��鼭 ���� ���� ��ȭ�� Ȯ���ϰ� �����ϴ� ���� ��õ�մϴ�.
#include <stdio.h>

// ���� �Լ�. y = |x| �� ���� �ǹ�.
// ����: arg ������ ���� ����.
// ����: arg ������ ���� �����Ѵ�.
int abs(int arg);

// �� ���� argument�� �޾Ƽ� �� �߿��� ū ������ ����
// ����: arg1 �� ���� argument�� ���ϱ� ���� ���� 1.
// ����: arg2 �� ���� argument�� ���ϱ� ���� ���� 2.
// ����: arg1, arg2�� ���Ͽ� �� �� ū ���� ����.
int compareBig(int arg1, int arg2);

int main(int argc, const char * argv[]) {
	// ��� row, column�� ���� i, j�� ����
	int i, j;

	// +a, -a�� ������ �ִ��� Ȯ���ϱ� ���� loop ������ ���� ����(���� ���� �ڵ�).
	// int k;

	// N ������ �����ϱ� ���� ����
	int edgeNumber = 0;
	// N ������ �������� �� �������� ��� ũ�� ����
	int squareMatrixSize = 0;

	// ���� ��� ���� ��
	int currentMatrixElementValue = 0;
	// ���� ��� ���� ��
	int pastMatrixElementValue = 0;
	// ����ؾ� �� ��� ���� ��
	int printMatrixElementValue = 0;

	// ��� ���� i, j �ּҿ� �ִ밪 ����
	// ��: 2 ������ �����ϸ� i�� �ּҰ��� �ִ밪�� ���� -1, 1�� �ȴ�. ���� j�� �ּҰ��� �ִ밪�� ���� -1, 1�� �Ǹ�, 1 ������ ���Ҵ� A(0,0)�� �ȴ�.
	int matrixElementRowMin = 0;
	int matrixElementRowMax = 0;
	int matrixElementColumnMin = 0;
	int matrixElementColumnMax = 0;

	// �� ���� ������ �����ϰ� ������ �ޱ� ���� ����
	printf("Input your number: ");
	scanf("%d", &edgeNumber);
	// N ������ �������� �� �������� ��� ũ�� ������ 2N-1
	squareMatrixSize = 2 * edgeNumber - 1;

	// ��� ���� i, j �ּҿ� �ִ밪�� ������ ����.
	// row�� column ���� ���� ������ ���簢�� ����̱� ����.
	matrixElementRowMin = edgeNumber - squareMatrixSize;
	matrixElementRowMax = (edgeNumber - squareMatrixSize) * -1;
	matrixElementColumnMin = edgeNumber - squareMatrixSize;
	matrixElementColumnMax = (edgeNumber - squareMatrixSize) * -1;

	// ���� �ڵ���� ��ȭ��.
	// ���� �ڵ�� k loop�� "edgeNumber - |a|" ��ŭ ������ �ϴ� �ݺ����� �ʿ��ϴ�.
	// ũ�Ⱑ ���� ����̸� ������ ������ ũ�Ⱑ Ŀ���� Ŀ������ �� �ݺ����� ���� �����Ͽ� �ӵ��� �������� ���� ������ �� �ִ�.
	// ���� �ڵ忡�� �߻��ϴ� ������ �ذ��ϱ� ���ؼ� ��� ���Ҹ� ����ϱ� ���� ������ �־��� ���Ұ�(pastMatrixElementValue) �����ߴ� ������ 
	// ���� ���Ұ� �����ϰ� �ִ� ����(currentMatrixElementValue)�� ��ȭ�� �ִ��� �����Ͽ� �� �� ��ŭ ���� loop ������ ������� �ʵ��� �Ѵ�.
	// ��: 
	// 3 3 3 3 3
	// 3 2 2 2 3
	// 3 2 1 2 3
	// 3 2 2 2 3
	// 3 3 3 3 3
	//
	// i row, j column�� �ִ� ��� ���Ҹ� A(i, j)��������. ��� ���Ҹ� A(n, n)�̶� ���� ��,
	// �� ��� ���� �� A(n-2, n-1) ���Ұ� �����ϴ� ������ 3 �����̸�, A(n-1, n-1) ���Ұ� �����ϴ� ������ 2�����̴�.
	// ���� ����ϴ� ��� ����� Z �������� ����ϹǷ� A(n-1, n-1)�� currentMatrixElementValue�� �ǰ�, A(n-2, n-1)�� pastMatrixElementValue�� �ȴ�.
	// ���� ���� ��ȭ�� currentMatrixElemntValue - pastMatrixElementValue = 2 - 3 = -1 �� �ȴ�.
	// ���� ��ȭ ���� CMD â�� ����� printMatrixElementValue�� ������ ����ϰ� �ȴ�.
	currentMatrixElementValue = edgeNumber;
	pastMatrixElementValue = edgeNumber;
	printMatrixElementValue = edgeNumber;

	// N ������ �������� �� �������� ��� ũ�⸦ �˷��ش�.
	printf("Your square matrix size is %d.\n", squareMatrixSize);

	// ����� Z �������� ����Ѵ�.
	for (i = matrixElementRowMin; i <= matrixElementRowMax; i++) {
		for (j = matrixElementColumnMin; j <= matrixElementColumnMax; j++) {

			// currentMatrixElementValue�� pastMatrixElementValue�� �����Ѵ�.
			pastMatrixElementValue = currentMatrixElementValue;
			// Problem_Set.pdf �� ���� ��ó��, ��� ���� A(i, j)���� i, j �� n+a�� ������ �����Ƿ� |a|�� ���Ͽ� ���� �� ������ �ִ��� Ȯ���Ѵ�.
			currentMatrixElementValue = compareBig(abs(i), abs(j));

			// printMatrixValue�� ������ ���� ���� ���� ����Ѵ�(�� �� +1�� ���� ������ ������ ������ 0���� ��µǱ� �����̴�).
			printMatrixElementValue = printMatrixElementValue + currentMatrixElementValue - pastMatrixElementValue;
			printf("%d ", printMatrixElementValue + 1);

			/*
			// ���� ���� �ڵ�
			for (k = edgeNumber; k >= 0; k--) {
			// A(i, j)�� +a �Ǵ� -a�� ������ �ִ��� abs()�� Ȯ���Ѵ�.
			// ��: 3 �����̸� i, j�� -2 �Ǵ� 2�� ������ �ִ�.
			if ((abs(i) == k) || (abs(j) == k)) {
			printf("%d ", k + 1);
			break;
			}
			}
			*/
		}
		printf("\n");
	}
	return 0;
}

int abs(int arg)
{
	if (arg >= 0) {
		return arg;
	}
	else {
		return (arg * -1);
	}
}

int compareBig(int arg1, int arg2)
{
	if (arg1 >= arg2) {
		return arg1;
	}
	else {
		return arg2;
	}
}