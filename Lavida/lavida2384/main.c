#include <stdio.h>

int main(void) {

    double a, b, c, d, e, f, area, rArea;
    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &c, &d);
    scanf("%lf %lf", &e, &f);

    area = (a * d + c * f + e * b - c * b - e * d - a * f)/2;
    if (area < 0) {
        area = area * (-1);
    }

    rArea = area* area*4;

    printf("%.0lf", rArea);
    return 0;
}