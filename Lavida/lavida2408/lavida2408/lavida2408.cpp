#pragma warning (disable : 4996)

#include <stdio.h>

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		printf("%d\n", a + b);
	}
}