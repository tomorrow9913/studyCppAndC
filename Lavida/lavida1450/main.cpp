#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int countCase , people[1001] = {0};
        scanf("%d", &countCase);

        int sum =0;
        for (int i = 0; i < countCase; ++i) {
            scanf("%d", &people[i]);
            sum += people[i];
        }
        double avg = (double)sum/countCase;
        int avgUpCnt =0;
        for (int j = 0; j < countCase; ++j) {
            if(people[j] > avg){
                avgUpCnt++;
            }
        }

        double result = (double)avgUpCnt/countCase*100;
        printf("%.3lf%%\n", result);
    }
    return 0;
}