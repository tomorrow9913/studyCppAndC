#include <stdio.h>

int main() {
    int testCase;
    scanf("%d",&testCase);

    while(testCase--){
        int repeat, numList[1001] = { 0, }, sum = 0;
        scanf("%d", &repeat);

        for (int i = 0; i < repeat; ++i) {
            scanf("%d", &numList[i]);
            sum += numList[i];
        }

        double avg;
        avg = (double)sum / repeat;

        printf("%.1f\n", avg);
    }
    return 0;
}