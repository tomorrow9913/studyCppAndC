#include <stdio.h>
#include <string.h>

int main() {
	int n, i = 0;
	char string[1025];

	scanf("%d", &n);

	for (int j = 0; j < n; j++){
		
		scanf("%s", &string);

		for (int i = 0; i < strlen(string); i++) { 
			if (string[i] >= 'A' && string[i] < 'Z') { 
				printf("%c", string[i] + 1);
			}
			else if (string[i] == 'Z') {
				printf("%c", 'A');
			}
		}

		printf("\n");
	}
}