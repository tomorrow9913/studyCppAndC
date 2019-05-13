#include <stdio.h>
#include <math.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int day;
        scanf("%d", &day);
        int consum[31] = { 0, };
        int i = 0, daySave = day;
        while (day--){
            scanf("%d", &consum[i]);
            i++;
        }
        int sum = 0;
        for (int j = 0; j < daySave; ++j) {
            sum += consum[j];
        }
        int averConsum;
        averConsum = floor((double)sum / daySave);
        printf("%d %d\n", sum, averConsum);
    }
    return 0;
}