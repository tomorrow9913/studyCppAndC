#include <stdio.h>

int main() {
	int testCase;

	scanf("%d", &testCase);

	while (testCase--)
	{
		int i = 0, j, a, number[4], x, y, z;


		scanf("%d %d %d", &number[0], &number[1], &number[2]); 

		for (i; i < 3; i++)
		{

			for (j = i + 1; j < 3; ++j)
			{

				if (number[i] > number[j])  
				{

					a = number[i];
					number[i] = number[j];  
					number[j] = a;

				}

			}

		}

		x = number[0];  
		y = number[1];
		z = number[2];

		if (z < x + y) {
			if (x * x + y * y == z * z) {
				printf("%.2f\n", (x*y) / 2.0);
			}
			else {
				printf("-2\n");
			}
		}
		else {
			printf("-1\n");
		}
	}
}