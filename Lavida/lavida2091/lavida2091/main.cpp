#include <stdio.h>

int main() {
	int m, n, sum;

	while (1) {
		scanf("%d %d", &m, &n);

		if (m == 0 && n == 0) {
			break;
		}
		if (m % 2 == 0) {
			m -= 1;
		}
		
		sum = ((1 + m) / 2)*(1 + m) / 2;

		if (sum%n) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
		
	}
}