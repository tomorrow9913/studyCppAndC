#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int score[6]={0};
        for (int i = 0; i < 5; ++i) {
            scanf("%d", &score[i]);
        }

        int tmp;
        for (int k = 0; k < 5; ++k) {
            for (int j = 0; j < 4; ++j) {
                if (score[j] > score[j+1]) {
                    tmp = score[j];
                    score[j] = score[j+1];
                    score[j+1] = tmp;
                }
            }
        }

        if(score[3]-score[1] >= 4){
            printf("KIN\n");
        }else{
            int sum=0;
            for (int i = 1; i < 4; ++i) {
                sum += score[i];
            }
            printf("%d\n", sum);
        }

    }
    return 0;
}