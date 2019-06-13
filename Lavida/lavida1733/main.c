#include <stdio.h>
#include <stdint.h>

int64_t FibSeries(int);

int main() {
    int64_t input;
    scanf("%lld", &input);

    while (input--){
        printf("%lld\n", FibSeries(input));
    }

    return 0;
}

int64_t FibSeries(int n) {
    if(n < 2) return n;
    else {
        long long tmp, current = 1, last = 0;
        for (int i = 2; i <= n; i++) {
            tmp = current;
            current += last;
            last = tmp;
        }
        return current;
    }
}