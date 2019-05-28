#include <stdio.h>

int main() {

    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int a, b, a_out, b_out, c_out, max_out = 0, out;

        scanf("%d %d %d %d %d", &a, &b, &a_out, &b_out, &c_out);


        for (int i = 0; i <= a && i <= b; i++) {
            out = a_out * (a - i) + b_out * (b - i) + c_out * (i * 2);
            if (max_out < out) {
                max_out = out;
            }
        }

        printf("%d\n", max_out);

    }
}