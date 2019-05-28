#include <stdio.h>

void PrintChandelier(int size, int thick){
    if(size%2){
        size++;
    }

    if (thick > size/2){
        printf("No DAP!");
        return;
    }

    for (int i = 0; i < size; ++i) {
        char printAlpa = 'A'+size-i-1;
        for (int j = 0; j <= size*2-1; ++j) {
            if(j==size*2-1-i){
                printf("\n");
                break;
            }

            if(j < i){
                printf(" ");
            }else{
                if(i<thick || i >= size-thick || j < i+thick || j >= size*2-i-thick-1){
                    if(i>=thick && i < size-thick && j == size*2-i-thick-1) {
                        printAlpa++;
                    }
                    printf("%c", printAlpa);
                    if(j < size-1){
                        printAlpa--;
                    }else {
                        printAlpa++;
                    }
                }else{
                    printf(" ");
                }
            }
        }
    }
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int size, thick;
        scanf("%d %d", &size, &thick);
        PrintChandelier(size, thick);
        printf("\n");
    }
    return 0;
}