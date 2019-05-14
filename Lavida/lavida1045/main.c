#include <stdio.h>

int IsPrime(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int a, b;
        scanf("%d %d", &a, &b);

        int count = 0;
        for (int i = a; i < b; ++i) {
            count += IsPrime(i);
        }
        printf("%d\n", count);
    }
    return 0;
}

int IsPrime(int n){
    if (n == 2){
        return 1;
    }
    for (int i = 2; i < n-1; ++i) {
        if(!(n % i)){
            return 0;
        }
    }
    return 1;
}