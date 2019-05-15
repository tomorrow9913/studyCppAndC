#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int x, y, result;
        char op;
        scanf("%d %d %c", &x, &y, &op);

        switch (op){
            case '+': result = x + y;
                break;
            case '-': result = x - y;
                break;
            case '*': result = x * y;
                break;
            case '/':
                if(y == 0){
                    result = -9999;
                }else{
                    result = x / y;
                }
        }
        printf("%d\n", result);
    }
    return 0;
}