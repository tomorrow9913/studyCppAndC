#include <stdio.h>

int main() {
	int a, b, c;

	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		int result = 0;
		result = (b*b) - (4 * a*c);

		if (result == 0) {
			printf("multiple\n");
		}
		else if (result < 0) {
			printf("imaginary\n");
		}
		else {
			printf("real\n");
		}
	}
}