/*
������ ���� 1�� ��հ��� �Ҽ��� ��° �ڸ����� �ݿø��� ����� ��° �ڸ����� ����Ѵ�.���� 12.345 �� ��쿡�� 12.35 �� ��µǾ�� �ϸ�, 34.721 �� ��쿡�� 34.72�� ��µǾ�� �Ѵ�.
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