#include <stdio.h>

void sum_even_odd_index(const int *arr, int n, int *even_sum, int *odd_sum,
                         int *even_count, int *odd_count) {
    *even_sum = 0;
    *odd_sum = 0;
    *even_count = 0;
    *odd_count = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            *even_sum += arr[i];
            (*even_count)++;
        } else {
            *odd_sum += arr[i];
            (*odd_count)++;
        }
    }
}

int main(void) {
    int n;

    printf("N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    int even_sum, odd_sum, even_count, odd_count;
    sum_even_odd_index(arr, n, &even_sum, &odd_sum, &even_count, &odd_count);

    printf("Output: \n");

    if (even_count > 0)
        printf("Even index elements -> Sum: %d, Average: %.2f\n", even_sum, (double)even_sum / even_count);
    else
        printf("Even index elements -> Sum: 0, Average: N/A\n");

    if (odd_count > 0)
        printf("Odd index elements -> Sum: %d, Average: %.2f\n", odd_sum, (double)odd_sum / odd_count);
    else
        printf("Odd index elements -> Sum: 0, Average: N/A\n");

    return 0;
}