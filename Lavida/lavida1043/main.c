#include <stdio.h>

int Sum(int);
int SoS(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);

        printf("%d\n", SoS(input));
    }
    return 0;
}

int Sum(int x){
    int sum = 0;
    while (x != 0){
        sum += x;
        x--;
    }
    return sum;
}

int SoS(int y){
    int sum = 0;
    while (y != 0){
        sum += Sum(y);
        y--;
    }
    return sum;
}