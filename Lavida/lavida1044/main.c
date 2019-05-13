#include <stdio.h>

int IsPrime(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);

        IsPrime(input);
    }
    return 0;
}

int IsPrime(int n){
    if (n == 2){
        printf("Prime\n");
        return 0;
    }
    for (int i = 2; i < n-1; ++i) {
        if(!(n % i)){
            printf("Not Prime\n");
            return 0;
        }
    }
   printf("Prime\n");
}