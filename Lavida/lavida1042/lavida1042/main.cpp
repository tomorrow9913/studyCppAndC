#include <stdio.h>

int main() {
	int testCase, mo, wo, my, wy;

	scanf("%d", &testCase);

	while (testCase--)
	{
		scanf("%d %d %d %d", &mo, &wo, &my, &wy);

		if (wo > 0 || wy > 0)
		{
			printf("%d\n", wo + wy);
		}
		else if (my > 0) {
			printf("1\n");
		}
		else {
			printf("Not Attended\n");
		}
	}
}