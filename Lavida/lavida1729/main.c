#include <stdio.h>

int RevNum(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);

        int revNum = RevNum(input), result;

        if(revNum <= input){
            result = input;
        } else {
            result = revNum;
        }

        printf("%d\n", result);
    }
    return 0;
}

int RevNum(int input){
    int rem, result = 0;
    while (input){
        rem = input % 10;
        input /= 10;

        result = (result * 10) + rem;
    }
    return result;
}