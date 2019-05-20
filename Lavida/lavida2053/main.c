#include <stdio.h>

int Reverse(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);
        int revNum = Reverse(input);

        if(input == revNum){
            printf("SAME\n");
            continue;
        }else{
            int temp;
            (input > revNum) ? (temp=input-revNum) : (temp=revNum-input);
            int result = temp%51;

            printf("%d\n", result);
        }
    }
    return 0;
}

int Reverse(int num){
    int temp = 0;
    while(num){
        temp = (temp * 10) + (num %10);
        num /= 10;
    }
    return temp;
}