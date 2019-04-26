#include <stdio.h>

int combination(int n, int r) {

	if (n == r || r == 0) {
		return 1;
	}

	//!? nCr = (n-1)C(r-1) + (n-1)C(r)
	return combination(n - 1, r - 1) + combination(n - 1, r);

}

int main() {
	int testCase, n, r;

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		scanf("%d %d", &n, &r);

		printf("%d", combination(n, r));
	}
}