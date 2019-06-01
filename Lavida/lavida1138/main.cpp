#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        char name1[101]={0}, name2[101] = {0};
        scanf("%s %s", name1, name2);
        int longLen;
        longLen = strlen(name1)>strlen(name2)?strlen(name1):strlen(name2);

        int enemyIndex = 0;
        for (int i = 0; i < longLen; ++i) {
            int temp1 = name1[i]!=0?name1[i]-64:0;
            int temp2 = name2[i]!=0?name2[i]-64:0;
            enemyIndex += (int)pow((temp1-temp2), 2);
        }
        enemyIndex /= longLen;

        printf("%d\n", enemyIndex);
    }
    return 0;
}