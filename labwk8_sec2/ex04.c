#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count_chars(const char *str, int *letters, int *digits, int *special) {
    *letters = 0;
    *digits = 0;
    *special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = (unsigned char)str[i];
        if (isalpha(c))
            (*letters)++;
        else if (isdigit(c))
            (*digits)++;
        else
            (*special)++;
    }
}

int main(void) {
    char line[256];

    printf("Input: ");
    if (fgets(line, sizeof(line), stdin) == NULL)
        return 1;

    /* strip trailing newline */
    line[strcspn(line, "\n")] = '\0';

    int letters, digits, special;
    count_chars(line, &letters, &digits, &special);

    printf("Output: \n");
    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Special Characters / Symbols: %d\n", special);

    return 0;
}