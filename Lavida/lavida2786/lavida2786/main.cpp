/*
#include <stdio.h>

int main() {
	int testCase, fstDS, secDS, fstHJ, secHJ, absDS, absHJ;

	scanf("%d", &testCase);
	
	for (int i = 0; i < testCase; i++)	{
		scanf("%d %d %d %d", &fstDS, &secDS, &fstHJ, &secHJ);

		if ((fstDS - secDS) <= 0) {
			absDS = (fstDS - secDS) * -1;
		}
		else {
			absDS = fstDS - secDS;
		}

		if ((fstHJ - secHJ) <= 0) {
			absHJ = (fstHJ - secHJ) * -1;
		}
		else {
			absHJ = fstHJ - secHJ;
		}

		if (absDS == 0 && absHJ == 0) {
			if (fstDS == secHJ)
			{
				printf("Draw\n");
			}
			else if (fstDS < secHJ) {
				printf("Kim DS wins\n");
			}
			else {
				printf("Yoo HJ wins\n");
			}
		}
		else
		{
			if (absDS == absHJ) {
				printf("Draw\n");
			}
			else if (absDS < absHJ) {
				printf("Kim DS wins\n");
			}
			else {
				printf("Yoo HJ wins\n");
			}
		}
	}
}
*/

#include <stdio.h>
#include <math.h>

int main() {
	int testCase, fstDS, secDS, fstHJ, secHJ;

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%d %d %d %d", &fstDS, &secDS, &fstHJ, &secHJ);

		if (abs(fstDS - secDS) == 0 && abs(fstHJ - secHJ) == 0) {
			if (fstDS == secHJ)
			{
				printf("Draw\n");
			}
			else if (fstDS < secHJ) {
				printf("Kim DS wins\n");
			}
			else {
				printf("Yoo HJ wins\n");
			}
		}
		else
		{
			if (abs(fstDS - secDS) == abs(fstHJ - secHJ)) {
				printf("Draw\n");
			}
			else if (abs(fstDS - secDS) < abs(fstHJ - secHJ)) {
				printf("Kim DS wins\n");
			}
			else {
				printf("Yoo HJ wins\n");
			}
		}
	}
}
