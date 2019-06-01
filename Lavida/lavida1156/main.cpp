#include <stdio.h>

int Reverse(int num){
    int temp = 0;
    while(num){
        temp = (temp * 10) + (num %10);
        num /= 10;
    }
    return temp;
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);

        int sum = input + Reverse(input);

        if(sum == Reverse(sum)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}