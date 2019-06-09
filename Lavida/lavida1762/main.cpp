#include <stdio.h>
#include <math.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int A, B;
        scanf("%d %d", &A, &B);

        int i;
        for (i = 0; B > pow(A, i); ++i);

        printf("%d\n", i-1);
    }
    return 0;
}