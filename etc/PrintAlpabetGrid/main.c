#include <stdio.h>

void PrintAlpabet(int size){
    char printOutput;
    for (int i = 0; i < size*3; ++i) {

        if(i < size || i > size*2)
            printOutput = 'A';
        else  printOutput = 'A'+size;

        for (int j = 0; j < size*3; ++j) {
            if(i < size || i >= size*2){
                if(j < size || j >= size*2){
                    printf("+");
                }else{
                    printf("%c", printOutput);
                    printOutput++;
                }
            }else{
                if(j < size || j >= size*2){
                    printOutput--;
                    if (j >= size*2){
                        printf("%c",printOutput+size);
                        continue;
                    }
                    printf("%c", printOutput);
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int size;
        scanf("%d", &size);

        while (size-- > 1) {
            PrintAlpabet(size + 1);
        }
        printf("\n");
    }
    return 0;
}