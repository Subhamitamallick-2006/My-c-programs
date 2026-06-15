#include <stdio.h>

int main() 
{
    float num, root;

    printf("Enter a number: ");
    scanf("%f", &num);

    root = sqrt(num);

    printf("Square root = %.2f\n", root);

    return 0;
}