#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int inputChange;
        scanf("%d", &inputChange);

        int output[6] = { 0, }, temp = inputChange, divNum[6] = {10000,5000,1000,500,100};
        for (int i = 0; i < 5; ++i) {
            output[i] = temp / divNum[i];
            temp %= divNum[i];
            printf("%d ", output[i]);
        }

        printf("\n");
    }
    return 0;
}