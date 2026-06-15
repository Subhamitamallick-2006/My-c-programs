#include <stdio.h>

int main()
{
    float radius, area, perimeter;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = (3.14 * radius * radius) / 2;
    perimeter = (3.14 * radius) + (2 * radius);

    printf("Area of the semicircle = %.2f\n", area);
    printf("Perimeter of the semicircle = %.2f\n", perimeter);

    
}