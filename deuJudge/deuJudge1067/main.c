#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    int temp;
    if(start > end){
        temp = end;
        end = start;
        start = temp;
    }

    int count = 0, sum = 0;
    for (int i = start; i <= end; ++i) {
        if(!(i%7) && !(i%2)) {
            count++;
            sum += i;
        }
    }
    printf("%d %d", count, sum);
}