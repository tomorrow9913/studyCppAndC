#include <stdio.h>

int Combination(int, int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int n, k;
        scanf("%d %d", &n, &k);

        printf("%d\n", Combination(n, k));
    }
    return 0;
}

int Combination(int n, int k){
    if(n==k || k == 0){
        return 1;
    }
    return Combination(n-1, k-1) + Combination(n-1,k);
}