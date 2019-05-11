#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    switch (input){
        case 1:
        case 3:
        case 4: printf("500");
            break;
        case 2:
        case 6: printf("600");
            break;
        default:printf("1000");
    }
    return 0;
}