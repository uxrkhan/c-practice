// 83. Reverse the String using Both Recursion and Iteration

#include <stdio.h>
#include <string.h> 

void swap(char *a, char *b) {
	char t = *a;
	*a = *b;
	*b = t;
}

void reverseStringRec(char s[], int start, int end) {
	if (start >= end) 
		return;

	// char temp = s[start];
	// s[start] = s[end];
	// s[end] = temp;
	swap(&s[start], &s[end]);

	reverseStringRec(s, start + 1, end - 1);
}

void reverseStringIter(char s[]) {
	int n = strlen(s);
	for (int i = 0; i < n/2; i++) {
		swap(&s[i], &s[n-i-1]);
	}
}


int main() {
	char s1[100], s2[100];
	printf("STRING: ");
	gets(s1);
	strcpy(s2, s1);

	reverseStringRec(s1, 0, strlen(s1)-1);
	reverseStringIter(s2);

	printf("REVERSED USING RECURSION: %s\n", s1);
	printf("REVERSED USING ITERATION: %s", s2);
}