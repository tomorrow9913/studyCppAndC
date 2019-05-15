#include <stdio.h>
#include <string.h>

int main(){
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        char input[101] = { 0, };
        scanf("%s", input);
        int len = strlen(input);

        int j = 0;
        char output[101]= { 0, };
        for (int i = 0; i*2 < len; i++) {
            output[j] = input[i*2];
            j++;
        }
        for (int k = 1; k*2-1 < len; ++k) {
            output[j] = input[k*2-1];
            j++;
        }

        printf("%s\n", output);
    }
}