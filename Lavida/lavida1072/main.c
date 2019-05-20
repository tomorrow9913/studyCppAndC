#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int i, n;
        scanf("%d", &n);

        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                printf("%d", i);

                n = n / i;
                if (n % i == 0) {
                    printf(" ");
                } else if (n % i != 0) {
                    if (n > i)
                        printf(" ");
                }
                i = 1;
            }
        }
        printf("\n");
    }
	return 0;
}