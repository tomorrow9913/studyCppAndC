#include <stdio.h>
int main()
{
    int a, b, num1, c, d, num2, t;
    double x, y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d\n %d %d %d", &a, &b, &num1, &c, &d, &num2);
        x = (d*num1 - b*num2) / (double)(a*d - b*c);
        y = (a*num2 - c*num1) / (double)(a*d - b*c);

        if (a / (float)c == b / (float)d)
            printf("-1\n");
        else
            printf("%.2lf %.2lf\n", x, y);
    }
    return 0;
}