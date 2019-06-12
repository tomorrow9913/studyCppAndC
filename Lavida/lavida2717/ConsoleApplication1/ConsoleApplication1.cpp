#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main() {
	int n;
	double sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < 5; i++)
	{
		double input, max =0;
		for (int  j = 0; j < n; j++)
		{
			scanf("%lf", &input);
			if (input >max)
			{
				max = input;
			}
		}
		sum += max;

	}

	printf("%.3lf\n", sum);
	return 0;
}