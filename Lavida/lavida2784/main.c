#include <stdio.h>
#include <math.h>

int main() {
    int a1, a2, a3, a4, a5, a6, a7;
    scanf("%d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7);

    int sumAudi;
    double averAudi;
    sumAudi = a1 + a2+ a3+ a4+ a5+ a6+ a7;
    averAudi =  floor(sumAudi / 7.0);

    printf("%d %.0f\n", sumAudi, averAudi);
    printf("%d", sumAudi*7000);

    return 0;
}