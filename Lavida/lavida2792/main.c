#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int loopNum, inputN, input[101] = {0};
        scanf("%d", &loopNum);

        int i = 0;
        while (loopNum--){
            scanf("%d", &inputN);
            if(inputN%2 && inputN>0){
                input[i] = inputN;
                i++;
            }
        }
        int tmp;
        for (int k = 0; k < i; ++k) {
            for (int j = 0; j < i - 1; ++j) {
                if (input[j] < input[j+1]) {
                    tmp = input[j];
                    input[j] = input[j+1];
                    input[j+1] = tmp;
                }
            }
        }
        if (i ==0){
            printf("None");
        }
        for (int l = 0; l < i; ++l) {
            printf("%d ", input[l]);
        }
        printf("\n");
    }
    return 0;
}