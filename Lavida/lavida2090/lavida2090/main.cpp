#include <stdio.h>

int main() {
	int input;

	while (1) {
		scanf("%d", &input);

		if (input == 0) {
			break;
		}
		if (input % 2 == 0) {
			input /= 2;
		}
		if (input % 3 == 0) {
			input /= 3;
		}
		if (input % 5 == 0) {
			input /= 5;
		}
		if (input % 7 == 0) {
			input /= 7;
		}
		printf("%d\n", input);
	}
}