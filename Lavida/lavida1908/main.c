#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int n, m, level[11][11] = { 0 };
        scanf("%d %d", &n, &m);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                scanf("%d", &level[i][j]);
            }
        }

        int max[11] = { 0 };
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < m; ++i) {
                if (level[k][i] > max[k]) {
                    max[k] = level[k][i];
                }
            }
        }

        int min[11] = { 0, };
        for (int k = 0; k < n; ++k) {
            min[k] = 500;
            for (int i = 0; i < m; ++i) {
                if (level[k][i] < min[k]) {
                    min[k] = level[k][i];
                }
            }
        }

        int MaxMin[21] = { 0, };
        for (int i = 0; i < 2*n; i++)
        {
            if (i < n)
            {
                MaxMin[i] = max[i];
            }
            else {
                MaxMin[i] = min[i-n];
            }
        }

        int tmp;
        for (int k = 0; k < 2 * n; ++k) {
            for (int j = 0; j < 2 * n - 1; ++j) {
                if (MaxMin[j] < MaxMin[j + 1]) {
                    tmp = MaxMin[j];
                    MaxMin[j] = MaxMin[j + 1];
                    MaxMin[j + 1] = tmp;
                }
            }
        }

        for (int l = 0; l < 2 * n; ++l) {
            printf("%d ", MaxMin[l]);
        }

        printf("\n");
    }

    return 0;
}