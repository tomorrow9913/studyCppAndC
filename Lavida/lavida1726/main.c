#include <stdio.h>

int StrangeCalculator(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input1, input2;
        scanf("%d %d", &input1, &input2);

        int strangeSum;
        strangeSum = StrangeCalculator(input1) + StrangeCalculator(input2);
        printf("%d\n", StrangeCalculator(strangeSum));
    }
    return 0;
}

int StrangeCalculator(int input){
    int rem, sum = 0;
    while (input){
        rem = input % 10;
        input /= 10;

        sum += rem;
    }
    return sum;
}
