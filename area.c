#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
