/*=======================================
	1. 처음 시작 점수는 0부터 시작한다.
	2. 첫 주사위의 수를 더한다.
	3. 두 번째에 나온 주사위의 수를 뺀다.
	4. 세 번째에 나온 주사위의 수를 곱한다.
	5. 네 번째에 나온 주사위의 수를 나눈다.
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