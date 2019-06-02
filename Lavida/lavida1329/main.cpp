#include <stdio.h>
#include <string.h>

int main() {
    int testCase, cnt =1;
    scanf("%d", &testCase);

    while  (testCase--){
        int missNum;
        char input[81] ={0};
        scanf("%d %s", &missNum, input);

        printf("%d ", cnt);
        cnt++;
        int strLen = strlen(input);
        for (int i = 0; i < strLen; ++i) {
            if(i==missNum-1){
                continue;
            }
            printf("%c", input[i]);
        }
        printf("\n");
    }
    return 0;
}