/*
 * Error.404 Not Found!
 * 아무것도 모르는 차차 (을)를 찾을 수 없습니다.
 * */
#include <stdio.h>
#include <math.h>

#define PI  3.141592

int main(){
    int testCase;
    scanf("%d", &testCase);

    int angle = 0;
    while (testCase--){
        int input;
        scanf("%d", &input);

        double xCos, ySin, rad;
        if(input==1){
            angle += -10;
        } else {
            angle += 10;
        }

        rad = angle * (PI/180);

        xCos = floor(cos(rad)*1000);
        ySin = floor(sin(rad)*1000);

        printf("%.3lf %.3lf\n", xCos/1000, ySin/1000);
    }
}