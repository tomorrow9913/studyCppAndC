#include <stdio.h>

int main() {
    char line1[11] [4]={"***","  *", "***", "***", "* *", "***", "***", "***","***","***"};
    char line2[11] [4]={"* *","  *", "  *", "  *", "* *", "*  ", "*  ", "  *","* *","* *"};
    char line3[11] [4]={"* *","  *", "***", "***", "***", "***", "***", "  *","***","***"};
    char line4[11] [4]={"* *","  *", "*  ", "  *", "  *", "  *", "* *", "  *","* *","  *"};
    char line5[11] [4]={"***","  *", "***", "***", "  *", "***", "***", "  *","***","***"};

    int testCase;
    scanf("%d", &testCase);

    while (testCase--){
        int input, divNum = 10000, i = 0;

        scanf("%d", &input);
        int temp = input;
        int inputNum[6];

        if (input == 10000){
            divNum = 10000;}
        else if(input > 1000){
            divNum = 1000;}
        else if(input > 100){
            divNum = 100;}
        else if(input > 10){
            divNum = 10;}
        else{
            divNum = 1;
        }

        while (divNum != 0){
            inputNum[i] = temp / divNum;
            temp %= divNum;
            divNum /= 10;
            i++;
        }
        int iSave = i;
        for (int j = 0; j < iSave ; ++j) {
            int numSave = inputNum[j];
            printf("%s ", line1[numSave]);
        }printf("\n");
        for (int j = 0; j < iSave ; ++j) {
            int numSave = inputNum[j];
            printf("%s ", line2[numSave]);
        }printf("\n");
        for (int j = 0; j < iSave ; ++j) {
            int numSave = inputNum[j];
            printf("%s ", line3[numSave]);
        }printf("\n");
        for (int j = 0; j < iSave ; ++j) {
            int numSave = inputNum[j];
            printf("%s ", line4[numSave]);
        }printf("\n");
        for (int j = 0; j < iSave ; ++j) {
            int numSave = inputNum[j];
            printf("%s ", line5[numSave]);
        }
        printf("\n\n");
    }
    return 0;
}