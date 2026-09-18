#include <stdio.h>

double base_area(double length, double width) {
    return length * width;
}

double base_perimeter(double length, double width) {
    return 2 * (length + width);
}

double volume(double length, double width, double height) {
    return length * width * height;
}

int main(void) {
    double length, width, height;

    while (1) {
        printf("Enter length, width, and height in cm: ");
        scanf("%lf %lf %lf", &length, &width, &height);

        if (length <= 0 || width <= 0 || height <= 0) {
            printf("Error: All dimensions must be greater than 0.\n");
            continue;
        }
        break;
    }

    printf("Base Area: %.2f\n", base_area(length, width));
    printf("Perimeter: %.2f\n", base_perimeter(length, width));
    printf("Volume: %.2f\n", volume(length, width, height));

    return 0;
}