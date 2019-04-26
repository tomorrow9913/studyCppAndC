/*
관람객 수의 1일 평균값을 소수점 셋째 자리에서 반올림한 결과를 둘째 자리까지 출력한다.답이 12.345 일 경우에는 12.35 가 출력되어야 하며, 34.721 일 경우에는 34.72가 출력되어야 한다.
*/

#include <stdio.h>

int main() {
	const double DAYS = 7.0;
	int mon, tue, wed, thu, fri, sat, sun;
	double everage;

	scanf("%d %d %d %d %d %d %d", &mon, &tue, &wed, &thu, &fri, &sat, &sun);
	
	everage = (mon + tue + wed + thu + fri + sat + sun) / DAYS;

	printf("%.2f", everage);
}