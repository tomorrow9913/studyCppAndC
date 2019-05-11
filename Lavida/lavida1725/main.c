#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int xClick, yClick;
        scanf("%d %d", &xClick, &yClick);

        if(xClick>=200 && xClick<=300 && yClick>=100 && yClick<=200){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}