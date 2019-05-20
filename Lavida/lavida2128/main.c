#include <stdio.h>

int main() {
    int parti, savePrize = 0;
    scanf("%d", &parti);

    while (parti--){
        int input[4] = { 0, }, saveNum[4] = { 0, }, count = 1, eqNum = 0, maxNum = 0;
        for (int i = 0; i < 3; ++i) {
            scanf("%d", &input[i]);
            for (int j = 0; j < 3; ++j) {
                if (input[i] == saveNum[j]){
                    eqNum = input[i];
                    count++;
                    continue;
                }
            }
            saveNum[i] = input[i];
            if (input[i] > maxNum){
                maxNum = input[i];
            }
        }
        int prize;
        switch (count){
            case 4: prize = 10000 + eqNum*1000;
                break;
            case 2: prize = 1000 + eqNum*100;
                break;
            default: prize =  maxNum*100;
        }

        if (prize > savePrize){
            savePrize = prize;
        }
    }

    printf("%d", savePrize);

    return 0;
}