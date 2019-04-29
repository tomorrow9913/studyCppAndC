#include <stdio.h>

int main() {
	int testCase, input, giveHs = 0, giveHj = 0;

	scanf("%d", &testCase);

	while (testCase--)
	{
		scanf("%d", &input);

		if (input % 2 || input == 2) {
			printf("NO\n");
		}
		else
		{
			giveHs = 2;
			giveHj = input - 2;
			printf("%d %d\n", giveHs, giveHj);
		}
	}
}