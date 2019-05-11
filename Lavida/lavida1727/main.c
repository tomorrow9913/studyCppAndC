#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int litter[4], distance[4];
        double fuelEff[4];
        for (int i = 0; i < 3; ++i) {
            scanf("%d %d", &litter[i], &distance[i]);
            fuelEff[i] = distance[i] / (double)litter[i];
        }

        int result = 3;
        if(fuelEff[0] >= fuelEff[1]) {
            if(fuelEff[0] >= fuelEff[2]) {
                result = 1;
            }
        }
        else {
            if(fuelEff[1] >= fuelEff[2]) {
                result = 2;
            }
        }

        printf("%d\n", result);
    }
    return 0;
}