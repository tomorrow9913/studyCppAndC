#include <stdio.h>

void PrintTower (int);

int main() {
    int N;
    scanf("%d", &N);
    PrintTower(N);
    return 0;
}

void PrintTower (int size){
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 2*size-1; ++j) {
            if((2*size-1)-i == j){
                break;
            }
            if(j < i){
                printf(" ");
            }else{
                printf("@");
            }
        }
        printf("\n");
    }

    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < 2*size-1; ++j) {
            if(j < size - i-1){
                printf(" ");
            }
            else if(j <= size +i-1){
                printf("@");
            }
        }
        printf("\n");
    }
}


/*
  @
 @@@
@@@@@
 */
