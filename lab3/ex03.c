#include <stdio.h>

int main () {
    int number;
    printf("Enter a number: ");
    scanf(" %d", &number);

    switch (number % 2);
    {
        case 0;
            printf(" %d is even");
            break;
        case 1;
            printf(" %d is odd");
            break;
    }
    default;
        printf