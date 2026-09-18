#include <stdio.h>

int is_palindrome(int n) {
    int original = n, reversed = 0;

    if (n < 0)
        return 0;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed == original;
}

int main(void) {
    int start, end;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        int tmp = start;
        start = end;
        end = tmp;
    }

    printf("The palindrome numbers within the interval [%d, %d] are:\n", start, end);

    int count = 0;
    long sum = 0;

    for (int i = start; i <= end; i++) {
        if (is_palindrome(i)) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    printf("\n");

    printf("Total palindrome numbers: %d\n", count);
    printf("Sum of palindrome numbers: %ld\n", sum);

    return 0;
}