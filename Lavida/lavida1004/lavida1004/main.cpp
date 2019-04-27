#include <stdio.h>

int main() {
	int cowSpeed;
	double jhonSpeed, distanse, result;

	scanf("%lf", &jhonSpeed);
	scanf("%lf", &distanse);
	scanf("%d", &cowSpeed);	

	result = ((distanse / jhonSpeed * 1.0)) * cowSpeed;

	printf("%.2f", result);
}