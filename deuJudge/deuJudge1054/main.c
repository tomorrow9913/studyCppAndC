#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int xSize, ySize;
        scanf("%d %d", &xSize, &ySize);

        for (int i = 0; i < ySize; ++i) {
            for (int j = 0; j < xSize; ++j) {
                if(i == 0 || j == 0 || i == ySize-1 || j == xSize-1){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}