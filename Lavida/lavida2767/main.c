#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == 0 || j==0 || i== size-1 || j == size-1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}