#include <stdio.h>

int main(){
	int n;
	char studentId[9];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

	scanf("%s", &studentId);
	
	printf("%c%c\n",studentId[2],studentId[3]);

	}
	return 0;
}