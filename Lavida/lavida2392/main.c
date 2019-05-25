#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m[10001] = {0};
    for (int i = 0; i < n; ++i) {
        scanf("%d", &m[i]);
    }
    int scope;
    scanf("%d", &scope);
    printf("%d", m[scope-1]);
    return 0;
}