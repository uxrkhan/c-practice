// 75. Replace Lowercase Characters by Uppercase & Vice-Versa

#include <stdio.h>
#include <string.h>

void toggleCase(char str[]) {
	int n = strlen(str);
	for (int i = 0; i < n; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') 
			str[i] = str[i] - ('a' - 'A'); 
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
	}
}

int main() {
	char str[100]; 
	printf("STRING: ");
	scanf("%s", str);

	toggleCase(str);

	printf("CASE TOGGLED: %s", str);
}