#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int population, hero, people[21] = { 0, };
        scanf("%d %d", &population, &hero);

        for (int i = 0; i < population; ++i) {
            scanf("%d", &people[i]);
        }

        int tmp;
        for (int k = 0; k < population; ++k) {
            for (int j = 0; j < population - 1; ++j) {
                if (people[j] > people[j+1]) {
                    tmp = people[j];
                    people[j] = people[j+1];
                    people[j+1] = tmp;
                }
            }
        }

        printf("%d\n", people[hero-1]);
    }
    return 0;
}