#include <stdio.h>

int main() {
	int testCase;

	scanf("%d", &testCase);

	while (testCase--) {
		int fstDs, secDs, fstHj, secHj, sumDs, sumHj;

		scanf("%d %d %d %d", &fstDs, &secDs, &fstHj, &secHj);

		sumDs = fstDs + secDs;
		sumHj = fstHj + secHj;

		if (sumDs == sumHj) {
			printf("Draw\n");
		}
		else if (sumDs > sumHj){
			printf("Kim DS wins\n");
		}
		else {
			printf("Yoo HJ wins\n");
		}
	}
}