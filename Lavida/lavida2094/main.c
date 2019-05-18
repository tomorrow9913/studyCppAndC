#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input[6];
        for (int i = 0; i < 5; ++i) {
            scanf("%d", &input[i]);
        }

        int temp;
        for (int k = 0; k < 5; ++k) {
            for (int a = 0; a < 4; ++a) {
                if (input[a+1] > input[a]){
                    temp = input[a];
                    input[a] = input[a+1];
                    input[a+1] = temp;
                }
            }
        }

        if(input[1] - input[3] >= 4){
            printf("KIN\n");
        }else{
            printf("%d\n", input[1]+input[2]+input[3]);
        }
    }
    return 0;
}