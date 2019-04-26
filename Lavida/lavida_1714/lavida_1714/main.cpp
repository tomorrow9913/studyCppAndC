#include <stdio.h>

int main() {
	int radius, diameter, area;

	scanf("%d", &radius);
	
	diameter = radius * 2;
	area = diameter * diameter;

	printf("%d", area);
}