#include <stdio.h>
#include <math.h>

int main() {
    int member[8];
    scanf("%d %d %d %d %d %d %d", &member[0], &member[1], &member[2], &member[3], &member[4], &member[5], &member[6]);

    int divNum = 7;
    for (int i = 0; i < 7; ++i) {
        if(!member[i]){
            divNum--;
        }
    }
    int sum = 0;
    for (int j = 0; j < 7; ++j) {
        sum += member[j];
    }
    int aver;
    aver = (int)floor(sum / (double)divNum);

    printf("%d %d", sum, aver);

    return 0;
}