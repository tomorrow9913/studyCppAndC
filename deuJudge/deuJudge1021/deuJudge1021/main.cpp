#include <stdio.h>
#include <string.h>

int main() {
	int testCase, dataLen, keyLen;
	char  data[1025], encodeKey[513], encodeText[1025];

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		scanf("%s", &data);
		scanf("%s", &encodeKey);

		dataLen = strlen(data);
		keyLen = strlen(encodeKey);

		for (int j = 0; j < dataLen; j++)
		{
			int k = 0;
			if (j > keyLen) {
				k = 0;
			}
			encodeText[j] = data[j] ^ encodeKey[k];
			k++;
		}

		printf("%s\n", encodeText);
	}
}