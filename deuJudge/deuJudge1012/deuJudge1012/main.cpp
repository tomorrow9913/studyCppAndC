#include <stdio.h>

int main()
{
	int n, day, hour, min, sec, remainder;
	unsigned int inputSec;

	const int DAY_SEC = 86400, HOUR_SEC = 3600, MIN_SEC = 60;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &inputSec);

		day = inputSec / DAY_SEC;
		remainder = inputSec % DAY_SEC;
		hour = remainder / HOUR_SEC;
		remainder = remainder % HOUR_SEC;
		min = remainder / MIN_SEC;
		remainder = remainder % MIN_SEC;
		sec = remainder;

		printf("%d day : %d hour : %d min : %d sec\n", day, hour, min, sec);
	}

	return 0;
}