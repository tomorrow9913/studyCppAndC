#include <stdio.h>

int main (){
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int matrixSizeA, matrixSizeB;
        scanf("%d %d", &matrixSizeA, &matrixSizeB);

        int matrix[101][101] = {0};
        for (int i = 0; i < matrixSizeA; i++)
        {
            for (int j = 0; j < matrixSizeB; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (int i = 0; i < matrixSizeB; i++)
        {
            for (int j = 0; j < matrixSizeA; j++)
            {
                printf("%d ", matrix[j][i]);
            }
            putchar('\n');
        }
        
    }
}