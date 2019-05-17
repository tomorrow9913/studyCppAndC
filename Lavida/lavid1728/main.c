#include <stdio.h>

int WhoIsWin(int, int, int, int, int, int);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int  KS, KR, KP, TS, TR, TP; // TS는 태영이 가위를 낼 확률, TR은 태영이 바위를 낼 확률, TP는 태영이 보를 낼 확률
        scanf("%d %d %d %d %d %d",  &KS, &KR, &KP, &TS, &TR, &TP);

        switch (WhoIsWin(KS, KR, KP, TS, TR, TP)){
            case 0: printf("Draw\n");
                break;
            case 1: printf("Kong\n");
                break;
            case 2: printf("Taeyoung\n");
        }
    }
    return 0;
}

int WhoIsWin(int KS, int KR, int KP, int TS, int TR, int TP){
    int winK = 0, winT = 0;

    winK = KS*TP + KR*TS + KP*TR; // winK는 K가 이길 확률의 합사건
    winT = TS*KP + TR*KS + TP*KR; // 위의 코드와 같은 내용

    if(winK == winT){
        return 0;
    }else if(winK > winT){
        return 1;
    }else{
        return 2;
    }
}