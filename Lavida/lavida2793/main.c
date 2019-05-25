#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int n, m[101] = {0};
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &m[i]);
        }
        int search;
        scanf("%d", &search);

        int count = 0;
        for (int j = 0; j < n; ++j) {
            if(m[j]==search){
                count++;
            }
        }

        if(count){
            printf("%d\n", count);
        } else {
            printf("None\n");
        }
    }
    return 0;
}