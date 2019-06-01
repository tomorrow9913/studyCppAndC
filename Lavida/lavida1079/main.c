#include <stdio.h>
#include <math.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int x, degree;
        scanf("%d %d", &x, &degree);

        int result = 0;
        while (degree--){
            int coefficient;
            scanf("%d", &coefficient);
            result += coefficient*pow(x, degree);
        }
        printf("%d\n", result);
    }
    return 0;
}