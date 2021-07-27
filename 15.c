// 15. Sort Names in an Alphabetical Order

#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 100

int main() {
	int n;
	printf("NUMBER OF NAMES: ");
	scanf("%d", &n);

	char names[n][MAX_NAME_SIZE];
	printf("ENTER NAMES:\n");
	for (int i = 0; i < n; i++) {
		scanf("%s", names[i]);
	}

	// sorting
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (strcmp(names[i], names[j]) < 0) {
				char temp[MAX_NAME_SIZE];
				strcpy(temp, names[j]);
				strcpy(names[j], names[i]);
				strcpy(names[i], temp);
			}
		}
	}

	printf("SORTED NAMES:\n");
	for (int i = 0; i < n; i++) {
		printf("%s ", names[i]);
	}

} 