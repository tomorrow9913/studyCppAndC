#include <stdio.h>

int main() {
	int mon, tue, wed, thu, fri, sat, sun, sum;
	double everage;

	scanf("%d %d %d %d %d %d %d", &mon, &tue, &wed, &thu, &fri, &sat, &sun);

	sum = mon + tue + wed + thu + fri + sat + sun;
	everage = sum / 7;

	printf("1�� ��� �������� %.0f�� �Դϴ�.", everage);

}