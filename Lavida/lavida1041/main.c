#include <stdio.h>

int KimFactorial(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);
        printf("%d\n", KimFactorial(input));
    }
}

int KimFactorial(int n) {
    if(n == 1){
        return 1;
    } else if( (KimFactorial(n-1) % n) ){
        return (KimFactorial(n-1)*n);
    }else{
        return (KimFactorial(n-1)/n);
    }
}