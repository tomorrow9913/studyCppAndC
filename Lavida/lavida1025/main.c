#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int n, score[51]= { 0, };
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            int *num = &score[i];
            scanf("%d", num);
        }

        int temp = 0;
        for (int k = 0; k < n; ++k) {
            for (int a = 0; a < n-1; ++a) {
                if (score[a+1] > score[a]){
                    temp = score[a];
                    score[a]= score[a+1];
                    score[a+1]= temp;
                }
            }
        }

        long int sum = 0;
        for (int j = 1; j < n-1; ++j) {
            sum += score[j];
        }

        double averScore;
        averScore = (double)sum / (n-2);

        printf("%.2lf\n", averScore);
    }
    return 0;
}