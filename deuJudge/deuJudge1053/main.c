#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int xInput, yInput;
        scanf("%d %d", &xInput, &yInput);

        for (int i = 0; i < yInput; ++i) {
            for (int j = 0; j < xInput; ++j) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}