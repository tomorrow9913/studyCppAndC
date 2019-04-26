#include <stdio.h>

int main() {
	int one, two, three, four, five, six, sum;
	double everage;

	scanf("%d %d %d %d %d %d", &one, &two, &three, &four, &five, &six);

	sum = one + two + three + four + five + six;
	everage = sum / 6.0;

	printf("%.4f", everage);

}