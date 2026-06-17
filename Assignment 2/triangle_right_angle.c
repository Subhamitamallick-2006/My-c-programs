#include <stdio.h>

int main()
{
    float base, height, hypotenuse;
    float area, perimeter;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter hypotenuse: ");
    scanf("%f", &hypotenuse);

    area = 0.5 * base * height;
    perimeter = base + height + hypotenuse;

    printf("Area of the right-angled triangle = %.2f\n", area);
    printf("Perimeter of the right-angled triangle = %.2f\n", perimeter);
    return 0;
    
}