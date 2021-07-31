// 121. C program that takes input as 2323 and gives output as 2332. ie. the new number should be greater than the previous number but should have the same digits

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return *(int *)a - *(int *)b;
}

int main() {
    char digits[100];
    printf("NUMBER: ");
    scanf("%s", digits);

    int len = strlen(digits);

    int j = len - 1;
    while (j > 0) {
        if (digits[j - 1] < digits[j]) {
            int min_idx = j;
            for (int k = j + 1; k < len; k++) {
                if (digits[k] < digits[min_idx] && digits[k] > digits[j-1]) {
                    min_idx = k;
                } 
            }
            int t = digits[min_idx];
            digits[min_idx] = digits[j-1];
            digits[j-1] = t;

            qsort(digits + j, len - j - 1, sizeof(int), compare);
            break;
        }
        j--;
    }
    
    if (j == 0) {
        printf("NOT POSSIBLE!");
    } else {
        printf("NEXT LARGEST NUMBER: %s", digits);
    }
}