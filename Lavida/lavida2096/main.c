#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int m, max = -1000, min = 1000;
        scanf("%d", &m);

        while (m--){
            int input;
            scanf("%d", &input);
            if (input > max)
                max = input;
            if (input < min)
                min = input;
        }

        int temp = max - min;
        if (temp % 5){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}