#include <stdio.h>

int main() {
    int input[11] = { 0, };
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &input[i]);
    }

    int bigSum = 0, smallSum = 0;
    for (int j = 0; bigSum < 100; ++j) {
        smallSum += input[j];
        bigSum = smallSum + input[j+1];
    }
    int subSmall = 100 - smallSum, subBig = bigSum-100;

    if (!subSmall){
        printf("%d", smallSum);
    }else if(subSmall == subBig){
        printf("%d", bigSum);
    }else{
        printf("%d", (subBig>subSmall)?smallSum:bigSum);
    }

    return 0;
}