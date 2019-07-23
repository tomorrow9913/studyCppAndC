#include <stdio.h>
#include <algorithm>

#define false   0
#define true    1
#define MAX 100001

int card[MAX];
int serch[MAX];
 
int twoserch(int left, int right, int serchnum){
    int mid = (left + right) / 2;
    int result;
    if (left > right)
        return false;
    else {
        if (card[mid] > serchnum){
            result = twoserch(left, mid - 1, serchnum);
        }
        else if (card[mid] < serchnum)
        {
            result = twoserch(mid + 1, right, serchnum);
        }
        else{
            return true;
        
        }
 
        return result;
    }
}
 
int main(void){
 
 
    int N, M;
 
    scanf("%d", &N);
 
    for (int i = 0; i < N; i++)
        scanf("%d", &card[i]);
 
    scanf("%d", &M);
 
    for (int i = 0; i < M; i++)
        scanf("%d", &serch[i]);
 
    std::sort(card, card + N);
 
    for (int i = 0; i < M; i++){
        int searchNum = serch[i];
        int left = 0, right = N - 1;
        int mid;
    
 
        if (twoserch(left, right, searchNum))
            printf("1\n");
        else
            printf("0\n");
    }
 
 
    return 0;
}