#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    for (int k = 0; k < input; ++k) {
        for (int i = 0; i < 2*input-1; ++i) {
            printf("%%");
        }
        printf("\n");
    }

    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < 2*input-1; ++j) {
            if(j < input - i-1){
                printf(" ");
            }
            else if(j <= input +i-1){
                printf("%%");
            }
        }
        printf("\n");
    }

    return 0;
}