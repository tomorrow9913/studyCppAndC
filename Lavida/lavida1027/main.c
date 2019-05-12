#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int n;
        scanf("%d", &n);

        int sum = 0;
        do {
            sum += n;
        } while (n--);

        printf("%d\n", sum);
    }
    return 0;
}