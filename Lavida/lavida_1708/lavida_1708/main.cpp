/*=======================================
	1. ó�� ���� ������ 0���� �����Ѵ�.
	2. ù �ֻ����� ���� ���Ѵ�.
	3. �� ��°�� ���� �ֻ����� ���� ����.
	4. �� ��°�� ���� �ֻ����� ���� ���Ѵ�.
	5. �� ��°�� ���� �ֻ����� ���� ������.
========================================*/
#include <stdio.h>

int main() {
	int fst, sec, thd, foth;
	double score = 0.0;

	scanf("%d %d %d %d", &fst, &sec, &thd, &foth);

	score = score + fst;
	score = score - sec;
	score = score * thd;
	score = score / foth;

	printf("%.2f", score);
}