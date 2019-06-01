#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        int people, seat;
        scanf("%d %d", &people, &seat);

        int checkSeat[51] ={0}, cntOut = 0;
        for (int i = 0; i < people; ++i) {
            int reserv, j=0;
            scanf("%d", &reserv);
            while(1){
                if(reserv+j-1>seat-1){
                    cntOut++;
                    break;
                }
                if(!checkSeat[reserv+j-1]){
                    checkSeat[reserv+j-1] = 1;
                    break;
                }
                j++;
            }
        }

        printf("%d\n", cntOut);
    }
    return 0;
}