#include <stdio.h>
#include <math.h>
#include <string.h>

double PercentageCalculator(int g, int l) {
	// 용적률 = ( G  / L ) × 100 (%)
	double result;
	result = ((double)g / l) * 100.0;

	return result;
}

int PassOrFail(char type[3], double value) {
	int Pass;
	if (!strcmp(type, "NE") || !strcmp(type, "AF") || !strcmp(type, "PM") || !strcmp(type, "CA")) {
		if (value > 80) {
			Pass = 0;
		}
		else {
			Pass = 1;
		}
	}
	else if (!strcmp(type, "PA") || !strcmp(type, "CG")){
		if (value > 100) {
			Pass = 0;
		}
		else {
			Pass = 1;
		}
	}
	else if (!strcmp(type, "CI")) {
		if (value > 400) {
			Pass = 0;
		}
		else {
			Pass = 1;
		}
	}
	else if (!strcmp(type, "CD")) {
		if (value > 500) {
			Pass = 0;
		}
		else {
			Pass = 1;
		}
	}
	else if (!strcmp(type, "CC")) {
		if (value > 1500) {
			Pass = 0;
		}
		else {
			Pass = 1;
		}
	}
	return Pass;
}

int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--) {
		char Type[3];
		int G, L;
		scanf("%s %d %d", Type, &G, &L);

		double Percentage;
		Percentage = PercentageCalculator(G, L);

		int PassFail;
		PassFail = PassOrFail(Type, Percentage);

		if (PassFail) {
			printf("Pass ");
		}
		else {
			printf("Fail ");
		}
		Percentage = round(Percentage*100)/100;
		printf("%.2lf %c \n", Percentage, 37);
	}
}