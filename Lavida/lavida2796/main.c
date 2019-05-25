#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int scr[8] = {0};
        for (int i = 0; i < 7; ++i) {
            scanf("%d", &scr[i]);
        }

        int tmp;
        for (int k = 0; k < 7; ++k) {
            for (int j = 0; j < 6; ++j) {
                if (scr[j] > scr[j+1]) {
                    tmp = scr[j];
                    scr[j] = scr[j+1];
                    scr[j+1] = tmp;
                }
            }
        }
        int sum, avg;
        if((scr[5]-scr[1]) >= 5){
            sum = scr[2]+scr[3]+scr[4];
            avg = sum/3.0;
        }else{
            sum = scr[1]+scr[2]+scr[3]+scr[4]+scr[5];
            avg = sum/5.0;
        }

        printf("%d\n", avg);
    }
    return 0;
}