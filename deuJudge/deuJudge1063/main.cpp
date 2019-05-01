#include <stdio.h>

int main(){
    int m, d1, d2, d3;

    scanf("%d %d %d %d", &m, &d1, &d2, &d3);

    if(m%d1 == 0 && m%d2 == 0 && m%d3 == 0){
        printf("YES");
    } else {
        printf("NO");
    }
}