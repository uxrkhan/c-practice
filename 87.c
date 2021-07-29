// 87. Copy One String to Another using Recursion

#include <string.h>
#include <stdio.h>

void strCpy(char s2[], char s1[], int s) {
	s2[s] = s1[s];
	if (s1[s] == '\0') 
		return;
	strCpy(s2, s1, s + 1);
}

int main() {
	char s1[100], s2[100];
	printf("STRING: ");
	gets(s1);
	strCpy(s2, s1, 0);
	printf("COPIED STRING: %s", s2);
}