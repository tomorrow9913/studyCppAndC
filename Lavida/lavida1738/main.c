#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int prise, salary = 5000, day = 0;
        scanf("%d", &prise);

        int saving = 0;
        while (saving < prise) {
            if (day != 0 && !(day % 10)) {
                salary += 200;
            }
            saving += salary;
            day++;
        }
        printf("%d\n", day);
    }
    return 0;
}