#include <stdio.h>
#include <string.h>

int main() {
	int testCase;
	char inputText[20001];

	scanf("%d", &testCase);
	
	for (int i = 0; i < testCase; i++) {
		scanf("%s", &inputText);
		int len = strlen(inputText);

		for (int j = 0; j < len; j++) {
			inputText[j] = inputText[j] ^ (1 << 5);
		}
		printf("%s", inputText);
		printf("\n");
	}
}