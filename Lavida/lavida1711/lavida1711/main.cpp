#include <stdio.h>

int main() {
	int a, b;
	double result = 0;

	scanf("%d %d", &a, &b);
	
	result = a + (a / 100.0)*b;

	printf("%.1f\n", result);
}