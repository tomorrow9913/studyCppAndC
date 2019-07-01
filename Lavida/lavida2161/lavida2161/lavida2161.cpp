#pragma warning (disable : 4996)

#include <stdio.h>

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--)
	{
		int N;
		scanf("%d", &N);

		for (int i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", N, i, N * i);
		}
	}
}