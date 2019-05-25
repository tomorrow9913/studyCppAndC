#include <stdio.h>

void PlantCoffeTree(int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int n;
        scanf("%d", &n);

        PlantCoffeTree(n);
        printf("\n");
    }
    return 0;
}

void PlantCoffeTree(int n){
    int k;
    char output[10] = { 'A', 'B', 'C', 'G', 'J', 'L', 'M', 'P', 'T'};
    for (int i = 0; i < n; ++i) {
        k = 0;
        for (int j = 0; j < n; ++j) {
            if (i <= n/2){
                if(j <= i && j!=0){
                    k++;
                }
                if (j >= n-i){
                    k--;
                }
            }
            else{
                if(j < n-i && j!=0){
                    k++;
                }
                if (j > n-(n-i)){
                    k--;
                }
            }
            printf("%c", output[k]);
        }
        printf("\n");
    }
}