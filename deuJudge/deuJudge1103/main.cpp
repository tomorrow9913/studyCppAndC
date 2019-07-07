#include <stdio.h>
#include <math.h>

void HanoiTower(int N, char from, char tmp, char to);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--)
    {
        int n;
        scanf("%d", &n);

        HanoiTower(n,'A','B','C');
        unsigned long long int result = pow(2,n)-1;
        printf("%llu\n", result);
    }
    
}

void HanoiTower(int N, char from, char tmp, char to){
    if(N==1){
        printf("원판 1을 %c 에서 %c로 옮긴다\n", from, to);
    }
    else{
        HanoiTower(N-1, from, to, tmp);
        printf("원판 %d를 %c 에서 %c로 옮긴다\n", N, from, to);
        HanoiTower(N-1, tmp, from, to);
    }
}