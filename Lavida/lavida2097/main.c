#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int population;
        int people[21] = { 0 };
        scanf("%d", &population);

        int sum = 0;
        for (int i = 0; i < population; ++i) {
            scanf("%d", &people[i]);
            sum += people[i];
        }
        double avg = sum / population;

        double abs[21] = { 0 };
        for (int j = 0; j < population; ++j) {
            (people[j] - avg < 0)?(abs[j] = -(people[j] - avg)):(abs[j] = (people[j] - avg));
        }

        int tmp;
        double temp;
        for (int k = 0; k < population; ++k) {
            for (int j = 0; j < population - 1; ++j) {
                if (abs[j] > abs[j+1]) {
                    tmp = people[j];
                    people[j] = people[j+1];
                    people[j+1] = tmp;

                    temp = abs[j];
                    abs[j] = abs[j+1];
                    abs[j+1] = temp;
                }
            }
        }

        printf("%d\n", people[0]);
    }
    return 0;
}