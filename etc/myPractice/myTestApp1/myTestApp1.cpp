// 작동이 어떻게 되는지 모르실 때는 breakpoint를 잡아가면서 변수 값의 변화를 확인하고 이해하는 것을 추천합니다.
#include <stdio.h>

// 절댓값 함수. y = |x| 와 같은 의미.
// 변수: arg 절댓값을 취할 변수.
// 리턴: arg 절댓값을 취해 리턴한다.
int abs(int arg);

// 두 개의 argument를 받아서 그 중에서 큰 변수를 리턴
// 변수: arg1 두 개의 argument를 비교하기 위한 변수 1.
// 변수: arg2 두 개의 argument를 비교하기 위한 변수 2.
// 리턴: arg1, arg2를 비교하여 그 중 큰 수를 리턴.
int compareBig(int arg1, int arg2);

int main(int argc, const char * argv[]) {
	// 행렬 row, column을 각각 i, j로 정의
	int i, j;

	// +a, -a를 가지고 있는지 확인하기 위한 loop 구문에 사용된 변수(이전 버전 코드).
	// int k;

	// N 껍질을 생성하기 위한 변수
	int edgeNumber = 0;
	// N 껍질을 생성했을 때 최종적인 행렬 크기 변수
	int squareMatrixSize = 0;

	// 현재 행렬 원소 값
	int currentMatrixElementValue = 0;
	// 이전 행렬 원소 값
	int pastMatrixElementValue = 0;
	// 출력해야 할 행렬 원소 값
	int printMatrixElementValue = 0;

	// 행렬 원소 i, j 최소와 최대값 변수
	// 예: 2 껍질을 생성하면 i의 최소값과 최대값은 각각 -1, 1이 된다. 또한 j의 최소값과 최대값도 각각 -1, 1이 되며, 1 껍질의 원소는 A(0,0)이 된다.
	int matrixElementRowMin = 0;
	int matrixElementRowMax = 0;
	int matrixElementColumnMin = 0;
	int matrixElementColumnMax = 0;

	// 몇 개의 껍질을 생성하고 싶은지 받기 위한 구문
	printf("Input your number: ");
	scanf("%d", &edgeNumber);
	// N 껍질을 생성했을 때 최종적인 행렬 크기 변수는 2N-1
	squareMatrixSize = 2 * edgeNumber - 1;

	// 행렬 원소 i, j 최소와 최대값으 변수를 저장.
	// row와 column 값이 같은 이유는 정사각형 행렬이기 때문.
	matrixElementRowMin = edgeNumber - squareMatrixSize;
	matrixElementRowMax = (edgeNumber - squareMatrixSize) * -1;
	matrixElementColumnMin = edgeNumber - squareMatrixSize;
	matrixElementColumnMax = (edgeNumber - squareMatrixSize) * -1;

	// 기존 코드와의 변화점.
	// 기존 코드는 k loop를 "edgeNumber - |a|" 만큼 돌려야 하는 반복문이 필요하다.
	// 크기가 작은 행렬이면 문제가 없으나 크기가 커지면 커질수록 위 반복문도 점점 증가하여 속도가 느려지는 것을 예측할 수 있다.
	// 기존 코드에서 발생하는 문제를 해결하기 위해서 행렬 원소를 출력하기 전에 이전에 있었던 원소가(pastMatrixElementValue) 존재했던 껍질과 
	// 현재 원소가 존재하고 있는 껍질(currentMatrixElementValue)에 변화가 있는지 측정하여 그 값 만큼 더해 loop 구문을 사용하지 않도록 한다.
	// 예: 
	// 3 3 3 3 3
	// 3 2 2 2 3
	// 3 2 1 2 3
	// 3 2 2 2 3
	// 3 3 3 3 3
	//
	// i row, j column에 있는 행렬 원소를 A(i, j)정의하자. 가운데 원소를 A(n, n)이라 했을 때,
	// 위 행렬 원소 중 A(n-2, n-1) 원소가 존재하는 껍질은 3 껍질이며, A(n-1, n-1) 원소가 존재하는 껍질은 2껍질이다.
	// 현재 출력하는 행렬 방식은 Z 방향으로 출력하므로 A(n-1, n-1)이 currentMatrixElementValue가 되고, A(n-2, n-1)이 pastMatrixElementValue가 된다.
	// 따라서 껍질 변화는 currentMatrixElemntValue - pastMatrixElementValue = 2 - 3 = -1 이 된다.
	// 껍질 변화 값은 CMD 창에 출력할 printMatrixElementValue에 더해져 출력하게 된다.
	currentMatrixElementValue = edgeNumber;
	pastMatrixElementValue = edgeNumber;
	printMatrixElementValue = edgeNumber;

	// N 껍질을 생성했을 때 최종적인 행렬 크기를 알려준다.
	printf("Your square matrix size is %d.\n", squareMatrixSize);

	// 행렬은 Z 방향으로 출력한다.
	for (i = matrixElementRowMin; i <= matrixElementRowMax; i++) {
		for (j = matrixElementColumnMin; j <= matrixElementColumnMax; j++) {

			// currentMatrixElementValue와 pastMatrixElementValue를 저장한다.
			pastMatrixElementValue = currentMatrixElementValue;
			// Problem_Set.pdf 에 나온 것처럼, 행렬 원소 A(i, j)에서 i, j 중 n+a를 가지고 있으므로 |a|를 취하여 현재 몇 껍질에 있는지 확인한다.
			currentMatrixElementValue = compareBig(abs(i), abs(j));

			// printMatrixValue에 껍질이 변한 값을 더해 출력한다(이 때 +1을 더한 이유는 더하지 않으면 0부터 출력되기 때문이다).
			printMatrixElementValue = printMatrixElementValue + currentMatrixElementValue - pastMatrixElementValue;
			printf("%d ", printMatrixElementValue + 1);

			/*
			// 이전 버전 코드
			for (k = edgeNumber; k >= 0; k--) {
			// A(i, j)에 +a 또는 -a를 가지고 있는지 abs()로 확인한다.
			// 예: 3 껍질이면 i, j에 -2 또는 2를 가지고 있다.
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