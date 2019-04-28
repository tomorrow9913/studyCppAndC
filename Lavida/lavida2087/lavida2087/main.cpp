#include <stdio.h>

int main() {
	int ej, jh;

	while (1) {
		scanf("%d %d", &ej, &jh);

		if (ej == 0 && jh == 0) {
			break;
		}

		if (ej == 1) {
			if (jh == 1) {
				printf("draw!\n");
			}
			else if (jh == 2) {
				printf("JJH wins!\n");
			}
			else {
				printf("PEJ wins!\n");
			}
		}

		if (ej == 2) {
			if (jh == 2) {
				printf("draw!\n");
			}
			else if (jh == 3) {
				printf("JJH wins!\n");
			}
			else {
				printf("PEJ wins!\n");
			}
		}

		if (ej == 3) {
			if (jh == 3) {
				printf("draw!\n");
			}
			else if (jh == 1) {
				printf("JJH wins!\n");
			}
			else {
				printf("PEJ wins!\n");
			}
		}
	}
}