#include <stdio.h>

int Reverse(int num){
    int temp = 0;
    while(num){
        temp = (temp * 10) + (num %10);
        num /= 10;
    }
    return temp;
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

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);

        int sumInput = input+Reverse(input);

        if (IsPrime(sumInput)){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }
    return 0;
}