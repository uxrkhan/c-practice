// 94. Find Highest Frequency Character in a String

#include <stdio.h>
#include <string.h>

int main() {
	printf("STRING: ");
	char s[100];
	gets(s);

	int hash[500] = {0};
	for (int i = 0; s[i] != '\0'; i++) {
		hash[s[i]]++;
	}

	int maxFreq = 0;
	char maxFreqChar;
	for (int i = 0; i < 500; i++) {
		if (hash[i]) {
			if (hash[i] > maxFreq) {
				maxFreq = hash[i];
				maxFreqChar = i;
			}
		}
 	}

 	printf("MAX FREQ CHAR: %c", maxFreqChar);
}