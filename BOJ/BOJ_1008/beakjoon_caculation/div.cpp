#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	double x, y;
	double result;

	scanf("%lf %lf", &x, &y);

	result = x / y;

	printf("%.9lf\n", result);

	return 0;
}