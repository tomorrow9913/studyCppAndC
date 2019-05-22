#include <stdio.h>
#include <stdint.h>

int64_t factorial(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int N;
        scanf("%d", &N);

        printf("%lld\n", factorial(N));
    }
    return 0;
}

int64_t factorial(int input) {
    if(input == 1){
        return 1;
    }else{
        return input*factorial(input -1);
    }
}