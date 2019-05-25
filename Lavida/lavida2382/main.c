#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    long int result = b*b - 4*a*c;
    printf("%ld", result);
    return 0;
}