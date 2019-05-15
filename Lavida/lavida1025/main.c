#include <stdio.h>
int main(void) {
    int sc, sum, num, testcase;
    double avg;

    scanf("%d", &testcase);

    while (testcase--) {
        scanf("%d", &num);

        int min = 2000;
        int max = -1000;
        sum = 0;
        for (int i = 0; i < num; i++) {
            scanf("%d", &sc);
            sum += sc;
            if (min > sc) {
                min = sc;
            }
            if (max < sc) {
                max = sc;
            }
        }

        sum = sum - max - min;
        avg = (double)sum / (num- 2);
        avg = (int)(avg*100.0 + 0.5) / 100.0;
        printf("%.2f\n", avg);
    }

    return 0;
}