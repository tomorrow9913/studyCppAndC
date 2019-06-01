#include <stdio.h>
#include <math.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int B, N;
        scanf("%d %d", &B, &N);

        int A=1;
        while(B > pow(A+1,N)){
            A++;
        }
        if(B-pow(A,N) > pow(A+1,N)-B){
            printf("%d\n", A+1);
        }else{
            printf("%d\n", A);
        }
    }
    return 0;
}