#include <stdio.h>

long sum_of_cubes(int start, int end) {
    long sum = 0;
    for (int i = start; i <= end; i++)
        sum += (long)i * i * i;
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

    printf("Sum of cubes from %d to %d is %ld\n", start, end, sum_of_cubes(start, end));

    return 0;
}