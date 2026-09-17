#include <stdio.h>

#define PI 3.14

double base_area(double r) {
    return PI * r * r;
}

double surface_area(double r, double h) {
    return 2 * PI * r * (r + h);
}

double volume(double r, double h) {
    return base_area(r) * h;
}

int main(void) {
    double r, h;

    while (1) {
        printf("Enter radius and height in cm: ");
        scanf("%lf %lf", &r, &h);

        if (r <= 0 || h <= 0) {
            printf("Error: Radius and height must be greater than 0.\n");
            continue;
        }
        break;
    }

    printf("Base Area: %.2f\n", base_area(r));
    printf("Surface Area: %.2f\n", surface_area(r, h));
    printf("Volume: %.2f\n", volume(r, h));

    return 0;
}