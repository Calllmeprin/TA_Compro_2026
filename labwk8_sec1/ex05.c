#include <stdio.h>

void sum_pos_neg(const int *arr, int n, int *pos_sum, int *neg_sum,
                  int *pos_count, int *neg_count) {
    *pos_sum = 0;
    *neg_sum = 0;
    *pos_count = 0;
    *neg_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            *pos_sum += arr[i];
            (*pos_count)++;
        } else if (arr[i] < 0) {
            *neg_sum += arr[i];
            (*neg_count)++;
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

    int pos_sum, neg_sum, pos_count, neg_count;
    sum_pos_neg(arr, n, &pos_sum, &neg_sum, &pos_count, &neg_count);

    printf("Output: \n");

    if (pos_count > 0)
        printf("Positive numbers -> Sum: %d, Average: %.2f\n", pos_sum, (double)pos_sum / pos_count);
    else
        printf("Positive numbers -> Sum: 0, Average: N/A\n");

    if (neg_count > 0)
        printf("Negative numbers -> Sum: %d, Average: %.2f\n", neg_sum, (double)neg_sum / neg_count);
    else
        printf("Negative numbers -> Sum: 0, Average: N/A\n");

    return 0;
}