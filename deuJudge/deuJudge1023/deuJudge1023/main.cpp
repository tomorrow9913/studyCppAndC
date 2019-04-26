#include <stdio.h>

int main() {
	int testCase, landSize;
	int outputNumber;

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%d", &landSize);

		if (landSize % 2) { //Â¦¼öÀÌ¸é °ÅÁþ È¦¼öÀÌ¸é Âü
			outputNumber = (landSize / 2) + 1;
		} else {
			outputNumber = landSize / 2;
		}
	}
}