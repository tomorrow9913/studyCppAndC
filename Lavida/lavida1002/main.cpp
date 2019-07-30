#include <stdio.h> 
#include <string.h>

#define MAX_TEXT_LENGTH 81

int main(){
    char inputText[MAX_TEXT_LENGTH] = {0}, outputText[MAX_TEXT_LENGTH] = {0};
    scanf("%s", inputText);

    int textlen =  strlen(inputText), temp = 0; 

    for (int i = 0; i < textlen; i++){ 
        if(inputText[i] == '%' && inputText[i + 1] == '2'){
            switch (inputText[i+2])
            {
            case '0':  outputText[temp] = ' ';  i=i+2;
                break;
            case '1': outputText[temp] = '!';  i=i+2;
                break;
            case '4': outputText[temp] = '$';  i=i+2;
                break;
            case '5': outputText[temp] = '%';  i=i+2;
                break;
            case '8': outputText[temp] = '('; i=i+2;
                break;
            case '9': outputText[temp] = ')'; i=i+2;
                break;
            case 'a': outputText[temp] = '*'; i=i+2;
                break;
            }
        }
        else {
            outputText[temp]=inputText[i];
        }
        temp++;
    }

    printf("%s\n", outputText);
    
}