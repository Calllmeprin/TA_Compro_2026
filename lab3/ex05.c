#include <stdio.h>

int main()
{
    float height, radius, volume;
    const float pi = 3.14;

    printf("Enter cone hight: ");
    scanf("%f", &height);

    printf("Enter cone base radius: ");
    scanf("%f", &radius);

    volume = (1.0 / 3.0) * pi * radius * radius * height;

    printf("Cone volume = %.1f\n\n", volume);

    if (volume > 260)
        printf("This cone is perfect for Supun project\n");
    else
        printf("This cone is not fit for this project\n");

    return 0;
}