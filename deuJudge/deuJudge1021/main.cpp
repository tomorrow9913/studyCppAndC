#include <stdio.h>
#include <string.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        char value[1025], key[513];
        scanf("%s", value);
        scanf("%s", key);

        int vl = strlen(value);
        int kl = strlen(key);

        for (int length = 0; length < vl; length++) {
            value[length] ^= key[length % kl];
        }
        printf("%s\n", value);
    }
}
