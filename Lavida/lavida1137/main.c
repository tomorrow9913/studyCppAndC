#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int sizeMap;
        scanf("%d", &sizeMap);

        char map[20][11] = {0};
        for (int i = 0; i < sizeMap; ++i) {
            scanf("%s", map[i]);
        }

        for (int j = 0; j < sizeMap; ++j) {
            for (int i = 0; i < 10; ++i) {
                if(map[j][i]=='.'){
                    printf("%s\n", map[j]);
                    break;
                }
            }
        }
    }
    return 0;
}