// 62. Find the Trace & Normal of a given Matrix

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	printf("MATRIX:\n");
	int a[n][n];
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	int trace = 0;
	float normal = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) 
				trace += a[i][j];
			normal += a[i][j] * a[i][j];
		}
	}
	normal = sqrt(normal);

	printf("TRACE: %d\nNORMAL: %.2f", trace, normal);
}