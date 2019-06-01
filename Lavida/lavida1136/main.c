#include <stdio.h>
#include <string.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        char input[105] ={0};
        int flag = 0;
        scanf("%s", input);

        int strLen = strlen(input);

        if(input[1]=='.' || input[2] =='.'){
            int i =2;
            for (input[2] =='.'?i = 3:0; i < strLen; ++i) {
                if(input[i] != '0'){
                    flag =1;
                    break;
                }
            }
        }
        if (flag){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}