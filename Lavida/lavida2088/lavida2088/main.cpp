#include <stdio.h>

int main() {
	int m, n, k, sum;
	while (1)
	{
		scanf("%d %d %d", &m, &n, &k);

		if (m == 0 && n == 0 && k == 0) {
			break;
		}
		
		sum = (n - m + 1)*(m + n) / 2;
		
		if (sum%k) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
	}
}