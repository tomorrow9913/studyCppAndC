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
			//Todo charchar ������ ���� ������ removeChar�� ���� 
			
			//Todo �� ���̰� 0�̸� i hate charchar��� �ƴϸ� ���� ���� ���
			if (strlen(removeChar) == 0){
				printf("i hate charchar");
			}
			else {

			}
		}

	}
	return 0;
}