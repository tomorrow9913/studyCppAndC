#include <stdio.h>
#define	DAYS	7.0
int main() {
	int sun, mon, the, wed, thu, fri, sat, sum;
	double everage;
	
	scanf("%d %d %d %d %d %d %d", &sun, &mon, &the, &wed, &thu, &fri, &sat);
	
	sum = sun + mon + the + wed + thu + fri + sat;
	everage = sum / DAYS;

	printf("%d\n", sum);
	printf("%.0f\n", everage);
}