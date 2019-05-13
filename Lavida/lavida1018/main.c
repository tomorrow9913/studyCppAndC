#include <stdio.h>

int main(){
    int num, up = 0, down = 50, count = 1, temp = 0;
    int penalty[50]= { 0, };
    while (1){
        char upAndDown [6];
        scanf("%d %s", &num, upAndDown);

        //? 맞춘 사람
        if(upAndDown[0] == 'R'){
            penalty[temp] = count;
            temp++;
            break;
        }

        //? 병신샷
        if (num <= up){
            penalty[temp] = count;
            temp++;
        }
        if (num >= down){
            penalty[temp] = count;
            temp++;
        }

        //? 지금 나온 수를 이전 최고 숫자와 최저 숫자보다 크거나 작으면 그 값을 저장
        if (num > up && upAndDown[0]=='U'){
            up = num;
        }
        if (num < down && upAndDown[0]=='D'){
            down = num;
        }
        count++;
    }
    for (int i = 0; i < temp; ++i) {
        printf("%d ", penalty[i]);
    }
}