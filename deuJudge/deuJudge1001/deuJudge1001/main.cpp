#include <stdio.h>
#include <string>
#include <iostream>

int CountChar(char input[1025]) {
	char* s = "char";
	int len = strlen(input);
	int result = 0;

	for (int i = 0; i < len; i++) {
		int weight = 0;
		for (int o = 0; o < 4; o++) {
			if (input[i + o] == s[o]) {
				weight++;
			}
		}
		if (weight == 4) {
			result++;
		}
	}
	return result;
}

int main() {
	int testCase;
	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		char input[1025];
		char lower[1025];
		scanf("%s", input);
		
		int len = strlen(input);

		int w = 0;
		for (char ch : input) {
			lower[w++] = tolower(ch);
		}
		lower[w++] = '\0';

		int result = CountChar(lower);

		if (result > 1){
			char result[1025] = { 0, };
			int index = 0;
			char* p = "char";
			for (int w = 0; w < len; w++) {
				int weight = 0;
				for (int e = 0; e < 4; e++) {
					if (lower[w + e] == p[e]) {
						weight++;
					}
				}
				if (weight != 4) {
					result[index++] = input[w];
				}
				else {
					w += 3;
				}
			}
			strlen(result)
		}
		else {
			printf("%s\n", input);
		}
	}
	
	return 0;
}