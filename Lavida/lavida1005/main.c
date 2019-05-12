#include <stdio.h>

int main() {
    char str[101] = { 0, };
    scanf("%s", str);


    for (int i = 0; i < 4; ++i) {
        int input;
        scanf("%d", &input);

        printf("%c", str[input]);
    }
    return 0;
}