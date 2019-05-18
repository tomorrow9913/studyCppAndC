#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        double input;
        scanf("%lf", &input);
        input /= 2.0;

        printf("begin\n");

        double result;
        int subNum = 0;

        while (input > subNum) {
            result = input-subNum;
            printf("%.1lf\n", result);
            input = result;
            subNum++;
        }

        printf("%.0lf\n", result*2);

        printf("end\n");
    }
    return 0;
}