#include <stdio.h>

void encode(char * input);

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        char input[101]= { 0, };
        scanf("%s", input);

        encode(input);

    }
    return 0;
}

void encode(char * input){
    int i = 0;
    while (input[i++]){
        if(input[i-1] >= 'A' && input[i-1] <= 'Z'){
            input[i-1] -= 20;
        }else if(input[i-1] == 'a' || input[i-1] == 'e' || input[i-1] == 'i' || input[i-1] =='o'|| input[i-1] == 'u'){
            switch (input[i-1]){
                case 'a': input[i-1] = '!';
                    break;
                case 'e': input[i-1] = '#';
                    break;
                case 'i': input[i-1] = '$';
                    break;
                case  'o': input[i-1] = '%';
                    break;
                case 'u': input[i-1] = '&';
                    break;
            }
        } else if(input[i-1] <= 'm'){
            input[i-1] -= 5;
        }else{
            input[i-1] += 3;
        }
    }
    printf("%s\n", input);
}