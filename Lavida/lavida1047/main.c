#include <stdio.h>

int SumOfReverse(int, int);
int Reverse(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", SumOfReverse(a,b));
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
int SumOfReverse(int a, int b){
    int temp;
    temp = Reverse(a) + Reverse(b);
    temp = Reverse(temp);
    return temp;
}