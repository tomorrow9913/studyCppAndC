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
    if (thick > size/2){
        printf("NoA\n");
        return;
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(i < thick || i >= size-thick || j < thick || j >= size-thick){
                printf("F");
            }else{
                printf("B");
            }
        }
        printf("\n");
    }
}