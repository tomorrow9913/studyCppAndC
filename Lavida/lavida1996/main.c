#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int price;
        scanf("%d", &price);

        int salary = 3000, save = 0, day = 0;
        while (save < price) {
            if(day >= 100){
                day = -1;
                break;
            }
            save += salary;
            day++;
            salary += 50;
        }

        if(day > 0){
            printf("%d\n", day);
        }else{
            printf("NO\n");
        }
    }
    return 0;
}