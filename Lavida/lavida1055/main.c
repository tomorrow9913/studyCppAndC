#include <stdio.h>

int ConvBinDec(char*);

int main(){
    int testCase;
    scanf("%d", &testCase);
    
    while (testCase--){
        char input[33] = { 0 };
        scanf("%s", input);
        
        char cutInput[4][9] = { 0 };
        for (int i = 0; i < 32; ++i) {
            cutInput[i / 8][i % 8] = input[i];
        }
        for (int i = 0; i < 3; i++){
            printf("%d.", ConvBinDec(cutInput[i]));
        }
        printf("%d\n", ConvBinDec(cutInput[3]));
    }
}

int ConvBinDec(char * bin) {
    int result = 0;
    for (int i = 0; i < 8; ++i) {
        result += (bin[i] - '0') << (7 - i);
    }
    return result;
}