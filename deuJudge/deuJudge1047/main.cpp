/*
 * Error. 404 Not Found!
 * 아무것도 모르는 차차 (을)를 찾을 수 없습니다.
 * */

#include <stdio.h>
#include <math.h>

int main () {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        double fstInput, secInput, temp = 0;
        scanf("%lf %lf", &fstInput, &secInput);

        temp = sqrt(fstInput*fstInput + secInput*secInput);

        double fstOutput, secOutput;
        fstOutput = floor((double)fstInput*1000 / temp);
        secOutput = floor((double)secInput*1000 / temp);

        printf("%.3lf %.3lf\n", fstOutput/1000, secOutput/1000);
    }
}