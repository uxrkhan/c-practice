// 26. Generate Pascal Triangle 1 D Array

#include <stdio.h>

int main() {
	int n;
	printf("ENTER NUMBER OF LINES: ");
	scanf("%d", &n);

	int c[n];

	printf("PASCAL'S TRIANGLE:\n");
	for (int i = 0; i <= n; i++) {
		c[0] = 1;
		printf("%d ", c[0]);
		for (int j = 1; j <= i; j++) {
			c[j] = c[j - 1] * (i - j + 1) / j;
			printf("%d ", c[j]);
		}
		printf("\n");
	}

}
