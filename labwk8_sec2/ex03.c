#include <stdio.h>

long sum_squares_odd(int start, int end) {
    long sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0)
            sum += (long)i * i;
    }
    return sum;
}

int main(void) {
    int start, end;

    printf("Enter the two integers (start end): ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        int tmp = start;
        start = end;
        end = tmp;
    }

    printf("Sum of squares of odd numbers from %d to %d is %ld\n",
           start, end, sum_squares_odd(start, end));

    return 0;
}