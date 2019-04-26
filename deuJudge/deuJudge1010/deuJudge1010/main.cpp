#include <stdio.h>

int main() {
	double base, height, area;

	scanf("%lf %lf", &base, &height);

	area = (base * height) / 2.0;

	printf("밑변 %.6f, 높이 %.6f, 면적 %.6f",base, height, area);

}