#include <stdio.h>

int main() {
	int n;
	char letter;

	scanf("%d", &n);

	for (int i = 0; i < 2*n; i++)
	{
		scanf("%c", &letter);

		if (letter >= 'A' && letter <= 'Z') {
			printf("%c\n", letter + 32);
		}
		else if (letter >= 'a' && letter <= 'z') {
			printf("%c\n", letter - 32);
		}
	}
}