// 108. Accept 2 String & check whether all Characters in first String is Present in second String & Print

#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100], res[100]; 
	printf("STRING 1: ");
	scanf("%s", str1); 
	printf("STRING 2: ");
	scanf("%s", str2);

	// int is_sub = isSubset(str1, str2);
	// if (isSubset(str1, str2)) 
	// 	printf("ALL CHARACTERS OF FIRST STRING ARE PRESENT IN SECOND STRING!");
	// else
	// 	printf("CHARACTERS OF FIRST STRING ARE PRESENT IN SECOND STRING!");

	int hash1[256] = {0};
	int hash2[256] = {0};

	for (int i = 0; i < strlen(str1); i++) {
		hash1[str1[i]] = 1;
	}
	for (int i = 0; i < strlen(str2); i++) {
		hash2[str2[i]] = 1;
	}

	char chars[256];
	int count = 0;
	for (int i = 0; i < 256; i++) {
		if (hash1[i] == 1 && hash2[i] == 0) {
			chars[count] = i;
			count++;
		} 
	}
	if (count == 0) 
		printf("ALL CHARACTERS OF FIRST STRING ARE PRESENT IN SECOND STRING");
	else {
		printf("CHARACTERS OF FIRST STRING NOT IN SECOND STRING:\n");
		for (int i = 0; i < count; i++) {
			printf("%c\n", chars[i]);
		}
	}
}
