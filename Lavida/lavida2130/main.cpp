#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int testCase;
    scanf("%d", &testCase);
 
    while (testCase--)
    {
        int i,j, m, n, cntBomb = 0;
        char**cPtr;
 
        scanf("%d %d", &m, &n);
 
        cPtr=(char**)malloc(sizeof(char*)*m);
        for (i=0; i<m; i++) cPtr[i]=(char*)malloc(sizeof(char)*n+1);
 
        for (i=0; i<m; i++) {
            scanf("%s", cPtr[i]);
            
            for (int j = 0; j < n; j++)
            {
                if (cPtr[i][j] == 'X'){
                    cntBomb++;
                }
            }
            
        }
 
        printf("%.1lf%%\n", (double)100*cntBomb/(m*n));

        for (i=0; i<m; i++)
            {
            for (j=0; j<n; j++)
                {
                if (cPtr[i][j]=='X') putchar('X');
                else{
                    int x,y, IsBumb=0;
 
                    x=i-1; y=j;   if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='X') IsBumb++;
                    x=i-1; y=j-1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='X') IsBumb++;
                    x=i;   y=j-1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='X') IsBumb++;
                    x=i+1; y=j-1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='X') IsBumb++;
                    x=i+1; y=j;   if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='X') IsBumb++;
                    x=i+1; y=j+1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='X') IsBumb++;
                    x=i;   y=j+1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='X') IsBumb++;
                    x=i-1; y=j+1; if (x>=0 && x<m && y>=0 && y<n && cPtr[x][y]=='X') IsBumb++;
                     
                    
					printf("%d", IsBumb);
                    }
                }
                printf("\n");
            }
 
        for (i=0; i<m; i++) free(cPtr[i]);
        free(cPtr);
    }    
    return 0;
}