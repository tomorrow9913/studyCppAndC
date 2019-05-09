#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, result;

    scanf("%d %d %d", &a, &b, &c);

    result = b*b-(4 * a*c);

    double large, small;
    if (result >= 0){
        large = (-b + sqrt(result)) / 2.0*a;
        small = (-b - sqrt(result)) / 2.0*a;
    }

    if (result == 0) {
        printf("%.4lf\n", large);
    }
    else if (result < 0) {
        printf("imaginary\n");
    }
    else {
        printf("%.4lf %.4lf\n", large, small);
    }
}
