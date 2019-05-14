#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int price, save;
        scanf("%d %d", &price, &save);

        int realPrice = price - save;
        int salary = 25000, sumSalary = 0, day = 0;

        while (realPrice > sumSalary){
            sumSalary += salary;
            day++;
        }
        printf("%d\n", day);
    }
    return 0;
}