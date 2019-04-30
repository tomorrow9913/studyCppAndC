#include <stdio.h>

int main() {
	int testCase, a, b, c, result;

	scanf("%d", &testCase);

	while (testCase--)
	{
		scanf("%d %d %d", &a, &b, &c);

		result = b*b-(4 * a*c);

		if (result == 0) {
			printf("This Equation has only one answer\n");
		}
		else if (result < 0) {
			printf("This Equation has no answer\n");
		}
		else {
			printf("This Equation has two answers\n");
		}
	}
}