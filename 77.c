// 77. Remove all Characters in Second String which are present in First String

#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100], res[100]; 
	printf("STRING 1: ");
	scanf("%s", str1); 
	printf("STRING 2: ");
	scanf("%s", str2);

	int hash1[1000] = {0};

	for (int i = 0; i < strlen(str1); i++) {
		hash1[str1[i]] = 1;
	}

	int k = 0;
	for (int i = 0; i < strlen(str2); i++) {
		if (hash1[str2[i]] == 0) {
			res[k++] = str2[i];
		} 
	}
	res[k] = '\0';

	printf("FINAL STRING: %s", res);

}
