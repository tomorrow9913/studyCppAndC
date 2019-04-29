#include <stdio.h>

int main() {
	int sizeMap, scrMap[17] = { 0, }, mapKey[17] = { 0, }, resultMap[17] = { 0, };

	scanf("%d", &sizeMap);
	for (int i = 0; i < sizeMap; i++)
		scanf("%d", &scrMap[i]);
	for (int i = 0; i < sizeMap; i++)
		scanf("%d", &mapKey[i]);

	for (int i = 0; i < sizeMap; i++)
	{
		resultMap[i] = scrMap[i] |= mapKey[i];

		int position = 0;
		int binary[6] = { 0, };

		while (resultMap[i] != 0)
		{
			binary[position] = resultMap[i] % 2;
			resultMap[i] = resultMap[i] / 2;

			position++;
		}

		printf("[");
		while (position--) {
			if (binary[position] == 0) {
				printf(" ");
			}
			else {
				printf("#");
			}
		}

		printf("]\n");
	}
}