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
    int output;
    for (int i = 0; i < n; ++i) {
        output = 1;
        for (int j = 0; j < n; ++j) {
            if (i <= n/2){
                if(j <= i && j!=0){
                    output++;
                }
                if (j >= n-i){
                    output--;
                }
            }
            else{
                if(j < n-i && j!=0){
                    output++;
                }
                if (j > n-(n-i)){
                    output--;
                }
            }
            printf("%d", output);
        }
        printf("\n");
    }
}