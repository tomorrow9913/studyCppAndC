#include <stdio.h>

int main() {
	int testCase, input;

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		int result = 0, temp = 1;

		scanf("%d", &input);

		while (input != 0)
		{
			if (input % 2)
			{
				result += temp;
			}
			input /= 10; 
			temp *= 2;
			
		}

		printf("%c\n", result);
	}
}