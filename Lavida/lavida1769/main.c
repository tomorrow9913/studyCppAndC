#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int N;
        scanf("%d", &N);

        if(N < 3){
            printf("-1\n");
        }else{
            printf("%d\n", N-2);
        }
    }
    return 0;
}