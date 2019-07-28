#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int n1,m1, matrix1[11][11] = {0,};
        scanf("%d %d", &n1, &m1);
        for (int i = 0; i < n1; ++i) {
            for (int j = 0; j < m1; ++j) {
                scanf("%d", &matrix1[i][j]);
            }
        }
        

        int n2,m2, matrix2[11][11] = {0,};
        scanf("%d %d", &n2, &m2);

        for (int k = 0; k < n2; ++k) {
            for (int i = 0; i < m2; ++i) {
                scanf("%d", &matrix2[k][i]);
            }
        }

        if(n1!=n2||m1!=m2){
            printf("Impossible\n");
            continue;
        }

        int resultArr[11][11] = {0};
        int zeroElementCnt = 0;

        for (int l = 0; l < n1; ++l) {
            for (int i = 0; i < m2; ++i) {
                resultArr[l][i] = matrix1[l][i]-matrix2[l][i];
                if (!resultArr[l][i]) zeroElementCnt++;
            }
        }

        if(zeroElementCnt == n1*m1){
            printf("Identical\n");
            continue;
        }
        
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                printf("%d ", resultArr[i][j]);
            }
            putchar('\n');
        }
        
    }
    return 0;
}