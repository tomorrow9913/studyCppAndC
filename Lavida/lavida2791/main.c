#include <stdio.h>

int IsPrime(int);

int main() {
    while (1) {
        int m, n;
        scanf("%d %d", &m, &n);

        if (m > n) {
            int temp = m;
            m = n;
            n = temp;
        }

        if (m == 0 && n == 0) {
            return 0;
        }

        int cnt = 1, flag = 1;
        while (m + 2 <= n) {
            if (IsPrime(m) && IsPrime(m + 2)) {
                printf("%d:(%d,%d)\n", cnt, m, m + 2);
                cnt++;
                flag = 0;
            }
            m++;
        }

        if (flag) {
            printf("No Twin Primes!\n");
        }
    }
}

int IsPrime(int n) {
    if (n == 2) {
        return 1;
    }
    for (int i = 2; i < n - 1; ++i) {
        if (!(n % i)) {
            return 0;
        }
    }
    return 1;
}