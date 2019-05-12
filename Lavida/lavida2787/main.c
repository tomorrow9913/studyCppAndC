#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int m, n, d1, d2;
        scanf("%d %d %d %d", &m, &n, &d1, &d2);

        if(m%d1 || m%d2 || n%d1 || n%d2){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
}