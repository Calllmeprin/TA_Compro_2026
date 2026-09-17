#include <stdio.h>

int is_armstrong(int n) {
    int original = n, sum = 0, temp = n;

    if (n < 0)
        return 0;

    while (temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return sum == original;
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

    printf("The Armstrong numbers within the interval [%d, %d] are:\n", start, end);

    int count = 0;
    long sum = 0;

    for (int i = start; i <= end; i++) {
        if (is_armstrong(i)) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    printf("\n");

    printf("Total Armstrong numbers: %d\n", count);
    printf("Sum of Armstrong numbers: %ld\n", sum);

    return 0;
}