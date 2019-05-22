#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int H, M;
        scanf("%d:%d", &H, &M);

        double angleH, angleM;
        angleH = (M + (H * 60)) * 0.5;
        angleM = M * 6.0;

        printf("%.1lf %.1lf\n", angleH, angleM);
    }
    return 0;
}