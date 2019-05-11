#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int nowNum[4]= { 0, };
        int pw[4];
        scanf("%d %d %d", &nowNum[0], &nowNum[1], &nowNum[2]);
        scanf("%d %d %d", &pw[0], &pw[1], &pw[2]);

        int saveCount = 0;
        for (int i = 0; i < 3; ++i) {
            int count = 0;
            while (nowNum[i] != pw[i]){
                if(nowNum[i] == 9){
                    nowNum[i] = 0;
                    count++;
                    continue;
                }
                nowNum[i]++;
                count++;
            }
            if(count > 5){
                count = 10 - count;
            }
            saveCount += count;
        }
        printf("%d\n", saveCount);
    }
    return 0;
}