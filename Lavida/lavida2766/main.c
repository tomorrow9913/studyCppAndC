#include <stdio.h>
 void PrintStar(int);

int main() {
        int size;
        scanf("%d", &size);

        PrintStar(size);

    return 0;
}

void PrintStar(int size){
    int t = 2*size-1;
    int m = t / 2 + 1;
    int k = 0;

    for (int i = 0; i <= t; ++i) {
        if (i < m) {
            ++k;
        } else {
            --k;
        }
        for (int j = 1; j <= m - k; ++j) {
            printf(" ");
        }
        for (int l = 1; l <= k * 2 - 1; ++l) {
            printf("*");
        }
        printf("\n");
    }
}