#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    for (int i = 0; i < age; ++i) {
        for (int j = 0; j < 2*age-1; ++j) {
            if(j < age - i-1){
                printf(" ");
            }
            else if(j <= age +i-1){
                printf("&");
            }
        }
        printf("\n");
    }
    return 0;
}