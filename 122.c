// 122. Find the Sum of ASCII values of All Characters in a given String

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("STRING: ");
    gets(s);

    int sum = 0;
    for (int i = 0; s[i]; i++) {
        printf("%c - %d\n", s[i], s[i]);
        sum += s[i];
    }

    printf("SUM: %d", sum);
}