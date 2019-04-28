#include <stdio.h>

int main() {
	int testCase, n;

	scanf("%d", &testCase);
	
	while (testCase--)
	{
		scanf("%d", &n);
		
		if (n < 0 || n>30) {
			printf("Impossible\n");
		}
		else {
			int result = 0;

			result = 1 << n;

			printf("%d\n", result);
		}
	}
}