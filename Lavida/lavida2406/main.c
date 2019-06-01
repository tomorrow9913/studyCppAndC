#include <stdio.h>

#define DRAW    0
#define  WIN    1
#define LOSE    -1

int IsJooAhnWin(int j, int m){
    if(j == m){
        return 0;
    }else if (j > m){
        return 1;
    }else{
        return -1;
    }
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int j[4] ={0}, jSum = 0, jodd = 0, m[4] = {0}, mSum=0, modd=0;
        for (int i = 0; i < 3; ++i) {
            scanf("%d", &j[i]);
            jSum += j[i];
            if(j[i]%2){
                jodd++;
            }
        }
        for (int i = 0; i < 3; ++i) {
            scanf("%d", &m[i]);
            mSum += m[i];
            if(m[i]%2){
                modd++;
            }
        }

        if(IsJooAhnWin(jSum, mSum)==1){
            printf("Joo-Ahn wins\n");
        } else if(IsJooAhnWin(jSum, mSum)){
            printf("Min-Gwang wins\n");
        }else{
            if(IsJooAhnWin(jodd, modd)==1){
                printf("Joo-Ahn wins\n");
            } else if(IsJooAhnWin(jodd, modd)){
                printf("Min-Gwang wins\n");
            }else{
                printf("Draw\n");
            }
        }
    }
    return 0;
}