#include <stdio.h>

void PrintRhombus(int);

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--) {
		int landSize;
		scanf("%d", &landSize);
		PrintRhombus(landSize);
	}
	return 0;
}
void PrintRhombus(int size) {
    if (!(size%2))
        size -= 1;
    int t = size;
	int m = t / 2 + 1;
	int k = 0;

	for (int i = 0; i <= t; ++i) {
		if (i < m) {
			++k;
		}
		else {
			--k;
		}
		for (int j = 1; j <= m - k; ++j) {
			if(!(size%2 && i == t))
				printf(" ");
		}
		for (int l = 1; l <= k * 2 - 1; ++l) {
			if (l == 1 || l == (k * 2 - 1)) {
				printf("$");
			}
			else {
				printf(" ");
			}
		}
		if (!(size % 2 && i == t)) {
			printf("\n");
		}
	}
}