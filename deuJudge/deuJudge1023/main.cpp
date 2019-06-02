#include <stdio.h>

int main()
{
    static int land[2001][2001] = { 0, }; // 스택 메모리 영역에 만들면 에러나는 듯

    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        //스태틱 변수로 배열 만들어서 초기화 따로 해줘야함.
        for (int j = 0; j < 2000; ++j) {
            for (int i = 0; i < 2000; ++i) {
                land[j][i]=0;
            }
        }

        int size;
        scanf("%d", &size);

        for (int i = 0; i < size; i++) {
            for (int y = 0 + i; y < size - i; y++) {
                for (int x = 0 + i; x < size - i; x++) {
                    land[y][x]++;
                }
            }
        }

        int minus = size%2 ? size/2+1: size/2;

        for (int y = 0; y < size; y++) {
            for (int x = 0; x < size; x++){
                printf("%d", minus - land[y][x] + 1);
            }
            putchar('\n');
        }
    }
}
