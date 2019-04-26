#include <stdio.h>
#include <string.h>

int main(void) {
	const int ALPHABET_COUNT = 26;
	char str[2000];
	char ap[27] = { 
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' 
	}; 
	int count[27] = { 0 };
	int textlen, testCase;

	scanf("%d", &testCase);

	for (int n = 0; n < testCase; n++) {

		scanf("%s", &str);
		textlen = strlen(str);
		
		for (int i = 0; i < ALPHABET_COUNT; i++) {
			for (int j = 0; j < textlen; j++) {
				if (ap[i] == str[j])
				count[i] += 1;
			}
			if (count[i] > 0) {
				printf("%c:%d\n", ap[i], count[i]);
			}
		}
		printf("\n");
		for (int x = 0; x < 27; x++) {
			count[x] = 0;
		}
	}

	return 0;
}