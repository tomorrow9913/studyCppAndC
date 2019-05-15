#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int x , y;
        char cowPos[51] = { 0, };
        scanf("%d %d", &x, &y);
        scanf("%s", cowPos);

        int i = 0;
        while (cowPos[i]){
            switch (cowPos[i++]){
                case 'L': x--;
                    break;
                case 'R': x++;
                    break;
                case 'U': y++;
                    break;
                case 'D': y--;
                    break;
            }
        }

        printf("%d %d\n", x, y);
    }
    return 0;
}