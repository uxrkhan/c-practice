// 109. Check whether a given Character is present in a String, Find Frequency & Position of Occurrence

#include <stdio.h>
#include <string.h>

int main() {
	char s[100], c;

	printf("STRING: ");
	gets(s);

	printf("CHARACTER: ");
	scanf("%c", &c);

	int count = 0, positions[100] = {0};
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == c) {
			positions[count] = i;
			count++;
		}
	}

	if (count == 0) {
		printf("CHARACTER NOT PRESENT!");
	} else {
		printf("FREQUENCY: %d\n", count);
		printf("POSITIONS: ");
		for (int i = 0; i < count; i++) {
			printf("%d ", positions[i]);
		}
	}
}