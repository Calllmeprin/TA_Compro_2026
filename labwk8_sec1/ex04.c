#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count_chars(const char *str, int *upper, int *lower, int *digits) {
    *upper = 0;
    *lower = 0;
    *digits = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = (unsigned char)str[i];
        if (isupper(c))
            (*upper)++;
        else if (islower(c))
            (*lower)++;
        else if (isdigit(c))
            (*digits)++;
    }
}

int main(void) {
    char line[256];

    printf("Input: ");
    if (fgets(line, sizeof(line), stdin) == NULL)
        return 1;

    /* strip trailing newline */
    line[strcspn(line, "\n")] = '\0';

    int upper, lower, digits;
    count_chars(line, &upper, &lower, &digits);

    printf("Output: \n");
    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digits);

    return 0;
}