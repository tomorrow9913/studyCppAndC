#pragma warning (disable : 4996)

#include <stdio.h>

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--)
	{
		int cnt;
		scanf("%d", &cnt);

		int result = 0, temp = 0;
		while (cnt > temp)
		{
			result++;
			if (!temp) {
				temp++;
				continue;
			}
			temp *= 2;
		}

		printf("%d\n", result-1);
	}
}