#include <stdio.h>
#include <stdint.h>

int64_t Sum(int, int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%lld\n", Sum(n,m));
    }
    return 0;
}

int64_t Sum(int n, int m){
    int64_t sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    return sum;
}