#include <stdio.h>

#define SCISSORS 1
#define ROCK 2
#define PAPER 3

#define WIN 1
#define LOSE -1
#define DRAW 0

int CalculateGameResult(int resultPlayer1, int resultPlayer2) {
    if (resultPlayer1 == SCISSORS) {
        if (resultPlayer2 == SCISSORS) {
            return DRAW;
        }

        if (resultPlayer2 == ROCK) {
            return LOSE;
        }

        if (resultPlayer2 == PAPER) {
            return WIN;
        }
    }

    if (resultPlayer1 == ROCK) {
        if (resultPlayer2 == SCISSORS) {
            return WIN;
        }

        if (resultPlayer2 == ROCK) {
            return DRAW;
        }

        if (resultPlayer2 == PAPER) {
            return LOSE;
        }
    }

    if (resultPlayer1 == PAPER) {
        if (resultPlayer2 == SCISSORS) {
            return LOSE;
        }
        if (resultPlayer2 == ROCK) {
            return WIN;
        }

        if (resultPlayer2 == PAPER) {
            return DRAW;
        }
    }
}

int CalculateProbability(int RL, int RR, int HL, int HR, int expectedResult) {
    int caseCount = 0;

    if (CalculateGameResult(RL, HL) == expectedResult) {
        caseCount += 1;
    }
    if (CalculateGameResult(RL, HR) == expectedResult) {
        caseCount += 1;
    }
    if (CalculateGameResult(RR, HL) == expectedResult) {
        caseCount += 1;
    }
    if (CalculateGameResult(RR, HR) == expectedResult) {
        caseCount += 1;
    }

    const int totalCaseCount = 4;

    int probability = (double) caseCount / totalCaseCount * 100;

    return probability;

}



int main() {
    int TestCase;

    scanf("%d", &TestCase);

    while (TestCase--) {
        int RL, RR, HL, HR;
        int win, draw, lose;

        scanf("%d %d %d %d", &RL, &RR, &HL, &HR);

        win = CalculateProbability(RL, RR, HL, HR, WIN);
        draw = CalculateProbability(RL, RR, HL, HR, DRAW);
        lose = CalculateProbability(RL, RR, HL, HR, LOSE);

        printf("%d %d %d\n", win, draw, lose);
    }
}