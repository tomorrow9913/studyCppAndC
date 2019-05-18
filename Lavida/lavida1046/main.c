#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int input1, input2;
        scanf("%d %d", &input1, &input2);

        int correct[4] = { 0, }, answer[4] = { 0, };
        for (int i = 0; i < 3; ++i) {
            correct[i]= input1 % 10;
            input1 /= 10;
        }
        for (int j = 0; j < 3; ++j) {
            answer[j]= input2 % 10;
            input2 /= 10;
        }

        int ball = 0, strike = 0;
        for (int k = 0; k < 3; ++k) {
            for (int i = 0; i < 3; ++i) {
                if (correct[k] == answer[i]) {
                    if (k == i) {
                        strike++;
                    } else {
                        ball++;
                    }
                }
            }
        }

        printf("%dS %dB\n", strike, ball);
    }
    return 0;
}