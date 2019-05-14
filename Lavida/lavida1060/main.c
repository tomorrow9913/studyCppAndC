#include <stdio.h>

void NumericalValue(char *w);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        char input[31] = { 0, };
        scanf("%s", input);
        NumericalValue(input);
    }
    return 0;
}

void NumericalValue(char * w){
    int i = 0, sumW = 0;
    while (w[i]){
        sumW += w[i]- 96;
        i++;
    }
    printf("%d\n", sumW);
}