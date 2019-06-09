#include <stdio.h>
#include <string.h>

int main() {
    int testCase, cnt = 1;
    scanf("%d", &testCase);

    while (testCase--) {
        char input[3001] = {0};
        scanf("%s", input);
        int strLen = strlen(input);
        char *ptr= strtok(input, "?");

        printf("<#%d %s>\n", cnt++, ptr);
        if(strLen > 2048){
            printf("Explorer Not supported\n");
        }else{
            while (ptr != nullptr){
                ptr = strtok(0, "=");
                if(ptr != NULL)
                    printf("%s : ", ptr);
                ptr = strtok(0, "&");
                if(ptr != NULL)
                    printf("%s\n", ptr);
            }
        }
        putchar('\n');
    }
    return 0;
}