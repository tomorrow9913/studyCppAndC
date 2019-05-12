#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int price;
        scanf("%d", &price);

        int day = 0, salary = 5000, save = 0, cycle =10, n=1;
        while (save < price){
            if(!cycle){
                n++;
                cycle = n*10;
                salary += 500;
            }

            save += salary;
            day++, cycle--;
        }
        printf("%d\n", day);
    }
    return 0;
}