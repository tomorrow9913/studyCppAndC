#pragma warning (disable : 4996)

#include <stdio.h>

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--)
	{
		int input;
		scanf("%d", &input);

		printf("%d\n", input * 103);
	}
}