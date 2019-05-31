#include <stdio.h>

int main() {
    int testCase, count = 1;
    scanf("%d", &testCase);

    while (testCase--){
        int preGen[30][30] = { 0, };
        int nextGen[30][30] = { 0, };

        for (int i = 0; i < 400; ++i) {
            scanf("%d", &preGen[5 + i / 20][5 + i % 20]);
        }
        for (int i = 0; i < 400; ++i) {
            int neighbor = 0;

            if (preGen[5 + i / 20 - 1][5 + i % 20 - 1] == 1) neighbor++;
            if (preGen[5 + i / 20 - 1][5 + i % 20] == 1) neighbor++;
            if (preGen[5 + i / 20 - 1][5 + i % 20 + 1] == 1) neighbor++;
            if (preGen[5 + i / 20][5 + i % 20 - 1] == 1) neighbor++;
            if (preGen[5 + i / 20][5 + i % 20 + 1] == 1) neighbor++;
            if (preGen[5 + i / 20 + 1][5 + i % 20 - 1] == 1) neighbor++;
            if (preGen[5 + i / 20 + 1][5 + i % 20] == 1) neighbor++;
            if (preGen[5 + i / 20 + 1][5 + i % 20 + 1] == 1) neighbor++;


            if (preGen[5 + i / 20][5 + i % 20] == 1 && (neighbor == 2 || neighbor == 3))
                nextGen[5 + i / 20][5 + i % 20]= 1;
            else if(preGen[5 + i / 20][5 + i % 20] == 0 && neighbor == 3)
                nextGen[5 + i / 20][5 + i % 20]= 1;
            else
                nextGen[5 + i / 20][5 + i % 20] = 0;
        }

        printf("<#%d 2nd Generation>\n", count++);
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                printf("%d ", nextGen[i + 5][j + 5]);
            }
            printf("\n");
        }
    }
    return 0;
}