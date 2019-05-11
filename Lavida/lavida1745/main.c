#include <stdio.h>

int main() {
    while (1){
        int n, m;
        scanf("%d %d", &n, &m);

        if(!(n&&m)){
            return 0;
        }

        if(n%m){
            printf("%d\n", n%m);
        } else {
            printf("multiple\n");
        }
    }
}