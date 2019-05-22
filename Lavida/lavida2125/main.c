#include <stdio.h>

int Reverse(int num){
    int temp = 0;
    while(num){
        temp = (temp * 10) + (num %10);
        num /= 10;
    }
    return temp;
}

int SumUnit(int num){
    int sum = 0;
    while (num){
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int input1, input2;
        scanf("%d %d", &input1, &input2);

        int sum = Reverse(input1)+Reverse(input2);

        while (sum > 10){
            sum = SumUnit(sum);
        }

        printf("%d\n", sum);
    }
    return 0;
}