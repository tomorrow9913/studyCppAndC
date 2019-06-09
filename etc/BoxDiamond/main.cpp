#include <stdio.h>

void PrintStar(int size){
    const char STAR = '*';
    const char BLANK = ' ';

    if(!(size%2)){
        size++;
    }

    for (int i=0;i<size;i++){
        for (int j=0; j<size;j++)
        {
            if (i<=size/2)
            {
                if (i && j && j!=size-1 && (i+j<=size/2-1 || j-i>=size/2+1 || (i+j >size/2 && j-i<size/2)))
                    putchar(BLANK);
                else
                    putchar(STAR);
            }
            else if (i>size/2)
            {
                if (i != size-1 && j && j!=size-1 && (i-j>=size/2+1||i+j>=size/2*3+1 || (i-j<size/2 && i+j<size/2*3)))
                    putchar(BLANK);
                else
                    putchar(STAR);
            }
        }
        putchar('\n');
    }
}

int main(){
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int size;
        scanf("%d", &size);

        PrintStar(size);
    }
}
