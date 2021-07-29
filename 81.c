// 81. Count the Number of Vowels & Consonants in a Sentence

#include <stdio.h>
#include <ctype.h>

int main() {
	char s[100];
	printf("SENTENCE: ");
	scanf("%[^\n]s", s);

	int vowels = 0, cons = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = tolower(s[i]);
		if (s[i] >= 'a' && s[i] <= 'z') {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
				vowels++;
			} else {
				cons++;
			}
		}
	}

	printf("VOWELS: %d\nCONSONENTS: %d", vowels, cons);
}