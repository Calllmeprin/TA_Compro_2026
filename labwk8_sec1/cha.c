#include <stdio.h>

#define NAME_LEN 50

double average_grade(const double *grades, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += grades[i];
    return sum / n;
}

void find_high_low(const double *grades, char names[][NAME_LEN], int n,
                    double *highest, char *high_name,
                    double *lowest, char *low_name) {
    *highest = grades[0];
    *lowest = grades[0];

    for (int i = 0; i < NAME_LEN; i++) {
        high_name[i] = names[0][i];
        low_name[i] = names[0][i];
        if (names[0][i] == '\0')
            break;
    }

    for (int i = 1; i < n; i++) {
        if (grades[i] > *highest) {
            *highest = grades[i];
            for (int j = 0; j < NAME_LEN; j++) {
                high_name[j] = names[i][j];
                if (names[i][j] == '\0')
                    break;
            }
        }
        if (grades[i] < *lowest) {
            *lowest = grades[i];
            for (int j = 0; j < NAME_LEN; j++) {
                low_name[j] = names[i][j];
                if (names[i][j] == '\0')
                    break;
            }
        }
    }
}

char letter_grade(double grade) {
    if (grade >= 80)
        return 'A';
    if (grade >= 70)
        return 'B';
    return 'C';
}

int main(void) {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][NAME_LEN];
    double grades[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", names[i]);
        printf("Enter grade of %s: ", names[i]);
        scanf("%lf", &grades[i]);
    }

    double avg = average_grade(grades, n);

    double highest, lowest;
    char high_name[NAME_LEN];
    char low_name[NAME_LEN];
    find_high_low(grades, names, n, &highest, high_name, &lowest, low_name);

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %.0f (%s)\n", highest, high_name);
    printf("Lowest grade: %.0f (%s)\n", lowest, low_name);

    printf("Students who passed:\n");
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 60)
            printf("%s - Grade %c\n", names[i], letter_grade(grades[i]));
    }

    return 0;
}