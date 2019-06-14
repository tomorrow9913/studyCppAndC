#include <stdio.h>
#include <string.h>

#pragma warning (disable : 4996)

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--)
	{
		char input[8][4] = { 0 };
		int in = 0, out = 0;
		for (int i = 0; i < 8; i++)
		{
			scanf("%s", &input[i]);
			if (i != 0 && i != 1) {
				if (!strcmp(input[i], "IN")) {
					in++;
				}
				else if (!strcmp(input[i], "OUT")) {
					out++;
				}
			}
		}

		if (!strcmp(input[0],input[1]))
		{
			printf("%s\n", input[0]);
		}
		else
		{
			if (in == out) {
				printf("AGAIN\n");
			}
			else if (in > out) {
				printf("IN\n");
			}
			else if (out > in) {
				printf("OUT\n");
			}
		}
	}
}