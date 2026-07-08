#include <stdio.h>

int main()
{
    printf("----------------+--------+--------+\n");
    printf("%-16s| %6s | %6s |\n", "Name", "Score1", "Score2");
    printf("----------------+--------+--------+\n");
    printf("%-16s| %6d | %6d |\n", "Alice", 85, 90);
    printf("%-16s| %6d | %6d |\n", "Bob", 78, 82);
    printf("%-16s| %6d | %6d |\n", "Charlie", 92, 88);
    printf("----------------+--------+--------+\n");

    return 0;
}