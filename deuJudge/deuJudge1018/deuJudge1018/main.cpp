#include <stdio.h>

int main() {
	int inputCoin, need500, need100, need10, remainder;

	scanf("%d", &inputCoin);

	need500 = inputCoin / 500;
	remainder = inputCoin % 500;
	need100 = remainder / 100;
	remainder = inputCoin % 100;
	need10 = remainder / 10;

	printf("%d\n", need500);
	printf("%d\n", need100);
	printf("%d\n", need10);

	return 0;
}