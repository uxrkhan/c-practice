// 86. Read a String and find the Sum of all Digits in the String

#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);

	int sum = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			sum += s[i] - '0';
		}
	}
	printf("SUM OF DIGITS: %d", sum);
}