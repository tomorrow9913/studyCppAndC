#include <stdio.h>

int main() {
	long testCase;
	long long inputNum;

	scanf("%ld", &testCase);
	for (int i = 0; i < testCase; i++) {
		scanf("%lld", &inputNum);

		int count = 0;
		for (long long pow = 1; inputNum > pow; pow *= 2) {
			count++;
		}

		printf("%d\n", count);
	}
}