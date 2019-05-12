#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int a, b, c, d, realResult, imaginaryResult;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        realResult = a*c - b*d;
        imaginaryResult = a*d + b*c;

        printf("%d %d\n", realResult, imaginaryResult);
    }
    return 0;
}