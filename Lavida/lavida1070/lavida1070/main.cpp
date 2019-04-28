#include <stdio.h>
#include <math.h>

int main() {
	int testCase, temperatuar;
	double result = 0;
	char cf;

	scanf("%d", &testCase);

	while (testCase--) {
		scanf("%c %d", &cf, &temperatuar);

		if (cf == 'C') {
			result = (9 / 5.0) * temperatuar + 32;
		}
		else if(cf == 'F'){
			result = (5 / 9.0) * (temperatuar - 32);
		}
		//result = floor(result);

		printf("%d\n", result);
	}
}