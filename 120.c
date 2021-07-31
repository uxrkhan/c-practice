// 120. Input a String with at least one Number, Print the Square of all the Numbers in a String

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int num;
    printf("NUMBER: ");
    scanf("%d", &num);

    int len = 0, temp = num;
    while (abs(temp) > 0) {
        len++;
        temp /= 10;
    }

    int i = 0;
    char *s;
    if (num < 0) {
        s = (char *)malloc(sizeof(char) * (len + 1));
        len = len + 1;
        s[0] = '-';
    } else {
        s = (char *)malloc(sizeof(char) * len);
    }
    s[len] = '\0';

    temp = num;
    while (abs(temp) > 0) {
        int rem = abs(temp % 10);
        s[len - i - 1] = rem + '0';
        temp /= 10;
        i++;
    }

    printf("NUMBER AS STRING: %s", s);

}