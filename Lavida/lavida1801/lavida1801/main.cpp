#include <stdio.h>

int main() {
	int up, down, tree, location = 0, day = 0;

	scanf("%d %d %d", &up, &down, &tree);

	while (location < tree) {
		location += up;
		if (location >= tree) {
			day++;
			break;
		}
		location -= down;
		day++;
	}
	printf("%d", day);
}