#include <stdio.h>

int main() {
	double base, height, area;

	scanf("%lf %lf", &base, &height);

	area = (base * height) / 2.0;

	printf("�غ� %.6f, ���� %.6f, ���� %.6f",base, height, area);

}