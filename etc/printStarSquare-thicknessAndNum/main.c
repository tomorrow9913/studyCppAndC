#include <stdio.h>

void PrintStar(int, int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int size, thick;
        scanf("%d %d", &size, &thick);

        PrintStar(size, thick);
    }
    return 0;
}

void PrintStar(int size, int thick){
    if(!(size%2)){
        size += 1;
    }

    char outputNum = 'A';
    if (thick > size/2){
        printf("NoA\n");
        return;
    }
    for (int i = 0; i < size; ++i) {
        char outputNum = 'A';
        for (int j = 0; j < size; ++j) {
            if(i < thick || i >= size-thick || j < thick || j >= size-thick){
                if(j < (size/2)+1 && j != 0){
                    outputNum++;
                }else if( j != 0) {
                    outputNum--;
                    if (i >= thick && i < size-thick ){
                        printf("%c", outputNum+1);
                    }
                }
                printf("%c", outputNum);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}