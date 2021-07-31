// 112. Find the First Occurence of the any Character of String2 in String1

#include <stdio.h>
#include <string.h>

int main() {
	char s1[100], s2[100];
	printf("STRING 1: ");
	gets(s1);
	printf("STRING 2: ");
	gets(s2);

	int hash2[256] = {0};
	for (int i = 0; i < strlen(s2); i++) {
		hash2[s2[i]]++;
	}

	int found = 0;
	for (int i = 0; i < strlen(s1); i++) {
		if (hash2[s1[i]]) {
			found = 1;
			printf("FIRST OCCURENCE: %c at %d", s1[i], i);
		}
	}

	if (!found) {
		printf("NO CHARACTERS ARE COMMON!");
	}

}