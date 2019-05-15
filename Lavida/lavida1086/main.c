#include <stdio.h>

void gcd(int a, int b);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int a, b;
        scanf("%d %d", &a, &b);
        gcd(a,b);
    }
    return 0;
}

void gcd(int a, int b){
    int r;
    while (b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    printf("%d\n", a);
}