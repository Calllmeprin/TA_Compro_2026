#include <stdio.h>

int main () {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number%2 ==0) {
        printf(" %d is even.\n");
    }
    else {
        printf(" %d is out of range. \n");
    }
    return(0);
}