#include <stdio.h>

int main() {
	int n, input;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		printf("%d\n", input);
	}

	return 0;
}