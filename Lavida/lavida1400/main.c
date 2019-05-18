#include <stdio.h>

int main() {
    int input1, input2;
    scanf("%d %d", &input1, &input2);

    int iptArr1[10] = { 0, }, iptArr2[10] = { 0, }, i1 = 0;

    while (input1){
        iptArr1[i1++] = input1 % 10;
        input1 /= 10;
    }

    int i2 = 0;
    while (input2){
        iptArr2[i2++] = input2 % 10;
        input2 /= 10;
    }

    int sum = 0;
    for (int i = 0; i < i1; ++i) {
        for (int j = 0; j < i2; ++j) {
            sum += iptArr1[i]*iptArr2[j];
        }
    }

    printf("%d", sum);
    return 0;
}