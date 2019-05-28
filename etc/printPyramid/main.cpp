#include <stdio.h>

void printStar(int size, int thick){
    if(size%2){
        size++;
    }

    if (thick > size/2){
        printf("No DAP!");
        return;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size*2-1; ++j) {
            if (j == size+i){
                printf("\n");
                break;
            }
            if(j < size-(i+1)){
                printf(" ");
            }else{
                if(i<thick || i >= size-thick || j < size-(i+1)+thick || j >= size+i-thick){
                    printf("*");
                }else{
                    printf("+");
                }
            }
        }
    }
}

int main(){
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int size, thick;
        scanf("%d %d", &size, &thick);
        printStar(size, thick);
        printf("\n");
    }
}