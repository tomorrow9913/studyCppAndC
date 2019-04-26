#include <stdio.h>
#include <string.h>

int main() {
	int testCase;
	char inputText[2001];

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%s", &inputText);

		for (int j = 0; j < strlen(inputText); j++) {
			if ((inputText[j] >= 'A') && (inputText[j] <= 'Z')) {
				printf("%c", inputText[j] + 32);
			}
			else {
				printf("%c", inputText[j] - 32);
			}
		}
		printf("\n");
	}
}