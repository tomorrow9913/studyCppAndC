#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int size;
        scanf("%d", &size);

        for (int i = 0; i < size ; ++i) {
            for (int j = 0; j < size; ++j) {
                if(i < j){
                    break;
                }
                if (j==0 || j==i || i==size-1){
                    printf("*");
                } else{
                    printf(" ");
                }

            }
            printf("\n");
        }
    }

    return 0;
}