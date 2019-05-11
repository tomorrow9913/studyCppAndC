#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int quo, rem;
    quo = a/b;
    rem = a%b;

    printf("%d %d", quo, rem);
    return 0;
}