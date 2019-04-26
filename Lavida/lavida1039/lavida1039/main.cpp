#include <stdio.h>

int main() {
	int testCase, a, b, c, d;

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);

		if ((b + d) / 2 == c) {
			printf("%d\n", d + (d - c));
		}
		else if ( ( b * d ) == c*c) {
			printf("%d\n", d * (d / c));
		}
	}
	
	return 0;
}