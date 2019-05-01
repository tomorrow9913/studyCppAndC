#include <stdio.h>

int main() {
    char input;

    scanf("%c", &input);

    if('A' <= input && input <= 'Z'){
        printf("uppercase\n");
    } else if('a' <= input && 'z' >= input){
        printf("lowercase\n");
    } else if('0' <= input && '9' >= input){
        printf("number\n");
    } else {
        printf("special\n");
    }

    return 0;
}