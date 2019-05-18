#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int population, achiev[21] = { 0, };
        scanf("%d", &population);

        for (int i = 0; i < population; ++i) {
            scanf("%d", &achiev[i]);
        }
 
        int sumAchiev = 0;
        for (int j = 0; j < population; ++j) {
            sumAchiev += achiev[j];
        }

        double avg;
        avg = (double)sumAchiev / population;

        double absAchiev[21] = { 0, };
        for (int l = 0; l < population; ++l) {
            if((achiev[l] - avg) >= 0) {
                absAchiev[l] = achiev[l] - avg;
            } else {
                absAchiev[l] = -1*(achiev[l] - avg);
            }
        }

        double tmp;
        int tmp2;
        for (int k = 0; k < population; ++k) {
            for (int j = 0; j < population - 1; ++j) {
                if (absAchiev[j] > absAchiev[j+1]) {
                    tmp = absAchiev[j];
                    absAchiev[j] = absAchiev[j+1];
                    absAchiev[j+1] = tmp;

                    tmp2 = achiev[j];
                    achiev[j] = achiev[j+1];
                    achiev[j+1] = tmp2;
                }
            }
        }

        printf("%d\n", achiev[0]);
    }
    return 0;
}