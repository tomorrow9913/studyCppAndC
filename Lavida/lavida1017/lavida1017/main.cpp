#include <stdio.h>

int main() {
	int testCase, a, b, num1, c, d, num2, xTemp = 0, yTemp = 0, resultTemp = 0;
	double xResult = 0, yResult = 0;

	scanf("%d", &testCase);

	while (testCase--)
	{
		scanf("%d %d %d", &a, &b, &num1);
		scanf("%d %d %d", &c, &d, &num2);

		if ((a*1.0 / c) == (b*1.0 / d)) {
			printf("-1\n");
		}
		else {
			yTemp = b*c - d*a;
			resultTemp = num1 *c - num2*a;

			yResult = resultTemp*1.0 / yTemp;
			xResult = num1 - b*yResult;

			printf("%.2lf %.2lf\n", xResult, yResult);
		}
	}
}