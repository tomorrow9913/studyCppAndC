#include <stdio.h>

void PrintRhombus(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int landSize;
        scanf("%d", &landSize);
        PrintRhombus(landSize);
    }
    return 0;
}
void PrintRhombus(int size) {
    int t = 2 * size - 1;
    int m = t / 2 + 1;
    int k = 0;
    int printNum = 1;

    for (int i = 0; i <= t; ++i) {
        if (i < m) {
            ++k;
        }
        else {
            --k;
        }
        for (int j = 1; j <= m - k && !(i == t); ++j) {
            printf(" ");
        }
        for (int l = 1; l <= k * 2 - 1; ++l) {
            printf("%d", printNum);
            if (l < size - (m - k)) {
                printNum++;
            }
            if (l >= size - (m - k)) {
                printNum--;
            }
        }
        if (!(i == t))
        {
            printf("\n");
        }
        printNum = 1;
    }
}