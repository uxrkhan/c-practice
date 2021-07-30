// 97. Check whether two Strings are Anagrams

#include <string.h>
#include <stdio.h>

int isAnagram(char *s1, char *s2) {
	int n1 = strlen(s1), n2 = strlen(s2);
	if (n1 != n2) {
		return 0;
	}

	int hash1[256] = {0}, hash2[256] = {0};
	for (int i = 0; i < n1; i++) {
		hash1[s1[i]]++;
		hash2[s2[i]]++;
	}

	for (int i = 0; i < 256; i++) {
		if (hash1[i] != hash2[i])
			return 0;
	}

	return 1;
}

int main() {
	char s1[100], s2[100];
	printf("STRING 1: ");
	gets(s1);
	printf("STRING 2: ");
	gets(s2);

	if (isAnagram(s1, s2)) {
		printf("ANAGRAMS!");
	} else {
		printf("NOT ANAGRAMS!");
	}
}