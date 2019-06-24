#include <stdio.h>

int Reverse(int num) {
    int temp = 0;
    while (num) {
        temp = (temp * 10) + (num % 10);
        num /= 10;
    }
    return temp;
}

int mulUnit(int num) {
    int save = num;
    int temp = 1;

    while(num){
        temp *= num % 10?num % 10:1;
        num /= 10;
    }

    if (temp > 99){
        return mulUnit(temp);
    }else{
        return temp;
    }
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--)
    {
        int N1, N2;
        scanf("%d %d", &N1, &N2);

        N1 = Reverse(N1);
        N2 = Reverse(N2);

        int sum = N1 + N2;

        if (sum < 100) {
            printf("%d\n", sum);
        }
        else {
            printf("%d\n", mulUnit(sum));
        }
    }
}