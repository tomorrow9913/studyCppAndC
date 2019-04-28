#include <stdio.h>

int main() {
	int testCase;
	long int inputNum;

	scanf("%d", &testCase);

	while (testCase--) {
		scanf("%d", &inputNum);

		if (inputNum < 0) {
			printf("BigInteger\n");
		}
		else if (inputNum <= 127) { 
			printf("Char\n");
		}
		else if (inputNum <= 32767) {
			printf("Short\n");
		}
		else if (inputNum <= 2147483647) {
			printf("Int\n");
		}
		else if (inputNum <= 9223372036854775807) {
			printf("Long\n");
		}
	}
}