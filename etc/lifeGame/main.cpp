#include <stdio.h>

int main() {
    int testCase, count = 1;
    scanf("%d", &testCase);

    while (testCase--){
        int preGen[20][21] = { 0, };
        int nextGen[20][21] = { 0, };

        for (int i = 0; i < 400; ++i) {
            scanf("%d", &preGen[i/20][i%20]);
        }
        for (int i = 0; i < 400; ++i) {
            int neighbor = 0;
            if (preGen[i/20-1][i%20-1]) neighbor++;
            if (preGen[i/20-1][i%20]) neighbor++;
            if (preGen[i/20-1][i%20+1]) neighbor++;
            if (preGen[i/20][i%20-1]) neighbor++;
            if (preGen[i/20][i%20+1]) neighbor++;
            if (preGen[i/20+1][i%20-1]) neighbor++;
            if (preGen[i/20+1][i%20]) neighbor++;
            if (preGen[i/20+1][i%20+1]) neighbor++;

            if (preGen[i/20][i%20] == 1 && neighbor < 2)
                nextGen[i/20][i%20]= 0;
            else if (preGen[i/20][i%20] == 1 && neighbor > 3)
                nextGen[i/20][i%20]= 0;
            else if (preGen[i/20][i%20] == 1 && (neighbor == 2 || neighbor == 3))
                nextGen[i/20][i%20]= 1;
            else if(preGen[i/20][i%20] == 0 && neighbor == 3)
                nextGen[i/20][i%20]= 1;
        }

        printf("<#%d 2nd Generation>\n", count++);
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                printf("%d ", nextGen[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}