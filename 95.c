// 95. Find the Length of the Longest Repeating Sequence in a String

#include <stdio.h>
#include <string.h>

#define max(a, b) (a > b ? a : b)

void printLRS(char str[]) {
	int n = strlen(str);
	int dp[n+1][n+1];

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			} else if (str[i-1] == str[j-1] && i != j) {
				dp[i][j] = 1 + dp[i-1][j-1];
			} else {
				dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
			}
		}
	}

	int len = dp[n][n];

	printf("LONGEST REPEATING SUBSEQUENCE LENGTH: %d", len);

}

int main() {
	printf("STRING: ");
	char str[100];
	gets(str);
	printLRS(str);
}