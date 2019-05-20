#include <stdio.h>

int ChangeBinDec(unsigned long long int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        unsigned long long int input;
        scanf("%llu", &input);

        printf("%d\n", ChangeBinDec(input));
    }
    return 0;
}

int ChangeBinDec(unsigned long long int bin) {
    int result = 0, temp = 1;

    while (bin){
        if(bin % 10){
            result+=temp;
        }
        bin /= 10;
        temp *= 2;

    }
    return result;
}