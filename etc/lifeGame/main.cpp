#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int testCase, count = 1;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    printf("    /￣/         /￣/    /￣￣￣￣/   /￣￣￣/");
    printf("   /  /          ￣     /   /￣￣￣  /  /￣￣");
    printf("  /  /         /￣/    /    ￣￣/   /   ￣￣/");
    printf(" /  /_____    /  /    /   /￣￣    /  /￣￣");
    printf("/_________/  /__/    /__ /        /   ￣￣/");
    printf("                                  ￣￣￣￣");
    printf("              /￣￣￣/     /￣￣\\     |￣\\  /￣|      /￣￣￣/");
    printf("             /  /￣￣     /  /\\  \\    | \\ \\/ / |     /  /￣￣");
    printf("             | \\    __   /   ￣   \\   | |\\__/| |    /   ￣￣/");
    printf("             \\  \\___||  /  /￣￣\\  \\  | |    | |   /  /￣￣");
    printf("              \\______/ /__/      \\__\\ |_|    |_|  /   ￣￣/");
    printf("                                                  ￣￣￣￣");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    _sleep(100);
    system("cls");

    printf("Enter Generation (-1 is infinite) : ");
    scanf("%d", &testCase);
    system("cls");

    int preGen[30][30] = { 0, };
    int nextGen[30][30] = { 0, };

    printf("Please Enter a map using 0 and 1. (20x20) : \n");

    for (int i = 0; i < 400; ++i) {
        scanf("%d", &preGen[5 + i / 20][5 + i % 20]);
    }

    while (testCase--){
        for (int i = 0; i < 400; ++i) {
            int neighbor = 0;

            if (preGen[5 + i / 20 - 1][5 + i % 20 - 1] == 1) neighbor++;
            if (preGen[5 + i / 20 - 1][5 + i % 20] == 1) neighbor++;
            if (preGen[5 + i / 20 - 1][5 + i % 20 + 1] == 1) neighbor++;
            if (preGen[5 + i / 20][5 + i % 20 - 1] == 1) neighbor++;
            if (preGen[5 + i / 20][5 + i % 20 + 1] == 1) neighbor++;
            if (preGen[5 + i / 20 + 1][5 + i % 20 - 1] == 1) neighbor++;
            if (preGen[5 + i / 20 + 1][5 + i % 20] == 1) neighbor++;
            if (preGen[5 + i / 20 + 1][5 + i % 20 + 1] == 1) neighbor++;


            if (preGen[5 + i / 20][5 + i % 20] == 1 && (neighbor == 2 || neighbor == 3))
                nextGen[5 + i / 20][5 + i % 20]= 1;
            else if(preGen[5 + i / 20][5 + i % 20] == 0 && neighbor == 3)
                nextGen[5 + i / 20][5 + i % 20]= 1;
            else
                nextGen[5 + i / 20][5 + i % 20] = 0;
        }

        preGen[30][30] = { 0, };
        system("cls");
        printf("<#%dth Generation>\n", count++);
        printf("+----------------------------------------+\n");
        for (int i = 0; i < 20; ++i) {
            printf("|");
            for (int j = 0; j < 20; ++j) {
                if(nextGen[i + 5][j + 5]) {
                    printf("O ");
                } else {
                    printf("  ");
                }
                preGen[i + 5][j + 5] = nextGen[i + 5][j + 5];
            }
            printf("|");
            printf("\n");
        }
        printf("+----------------------------------------+\n");
        _sleep(100);
    }
    return 0;
}