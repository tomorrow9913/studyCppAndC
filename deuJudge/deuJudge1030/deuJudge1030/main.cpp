#include <stdio.h>
#include <string.h>

int main() {
	int testCase, countChar = 0;
	char inputText[1025], removeChar;

	scanf("%d", &testCase);
	
	for (int i = 0; i < testCase; i++) {
		scanf("%s", &inputText);
		
		char* pch;
		char* mainText = strlwr(inputText);
		pch = strchr(inputText, 'CHAR');

		while (pch != NULL) {
			pch = strchr(pch + 1, 'CHAR');
			countChar++;
		}

		if (countChar < 2) {
			printf("%s\n", inputText);
		} else {
			//Todo charchar 지운후 지운 내용을 removeChar에 대입 
			
			//Todo 그 길이가 0이면 i hate charchar출력 아니면 지운 값을 출력
			if (strlen(removeChar) == 0){
				printf("i hate charchar");
			}
			else {

			}
		}

	}
	return 0;
}