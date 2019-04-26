#include <stdio.h>

int main() {
	double speed, time, length;

	scanf("%lf %lf", &speed, &time);

	length = speed * time;

	printf("%.3f %.3f %.2f", speed, time, length);

	return 0;
}