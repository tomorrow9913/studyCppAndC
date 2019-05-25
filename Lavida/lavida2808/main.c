#include <stdio.h>
#include <stdint.h>

int64_t fact(int N){
    if(N == 1){
        return 1;
    }else{
        return N*fact(N-1);
    }
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);
        printf("%lld\n", fact(input));
    }
    return 0;
}