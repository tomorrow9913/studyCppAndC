#include <stdio.h>
#include <stdlib.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--)
    {
        int i,j, m, n;
        char**cPtr;

        scanf("%d %d", &n, &m);

        cPtr=(char**)malloc(sizeof(char*)*m);
        for (i=0; i<m; i++) cPtr[i]=(char*)malloc(sizeof(char)*n+1);

        for (i=0; i<m; i++) scanf("%s", cPtr[i]);

        for (i=0; i<m; i++)
            {
            for (j=0; j<n; j++)
                {
                if (cPtr[i][j]=='*') printf("*");
                else{
                    int x,y, IsBumb=0;

                    x=i-1; y=j;   if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='*') IsBumb++;  //서
                    x=i-1; y=j-1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='*') IsBumb++;  //북서
                    x=i;   y=j-1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='*') IsBumb++;  //북
                    x=i+1; y=j-1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='*') IsBumb++;  //북동
                    x=i+1; y=j;   if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='*') IsBumb++;  //동
                    x=i+1; y=j+1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='*') IsBumb++;  //남동
                    x=i;   y=j+1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='*') IsBumb++;  //남
                    x=i-1; y=j+1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='*') IsBumb++;  //남서
                    
                    if (!IsBumb){
                        putchar('.');
                    }else{
                        printf("%d", IsBumb);
                    }
                    }
                }
            printf("\n");
            }

        for (i=0; i<m; i++) free(cPtr[i]);
        free(cPtr);
    }    
    return 0;
}