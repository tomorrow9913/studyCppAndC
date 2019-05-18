#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    for (int k = 0; k < age; k++) {
        for (int i = 0; i < 2*age-1; ++i) {
            if(i <= k-1){
                printf(" ");
            }else if(i < 2*age-1-k){
                printf("@");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 2*age-1; ++i) {
        for (int j = 0; j < 2*age-1; ++j) {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}