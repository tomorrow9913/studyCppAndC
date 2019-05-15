#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input;
        scanf("%d", &input);

        int day = 0;
        while (input != 1) {
            if (input % 2) {
                input = input * 3 + 1;
                day++;
            } else {
                input = input / 2;
                day++;
            }
        }

        printf("%d\n", day);
    }
    return 0;
}