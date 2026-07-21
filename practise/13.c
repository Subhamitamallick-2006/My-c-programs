#include <stdio.h>

int main() 
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    
    if (number > 0) 
    {
     printf("Number entered is positive\n");
        if (number % 2 == 0) 
        {
         printf("and it is an EVEN number.\n");
        } 
        else 
        {
        printf("and it is an ODD number.\n");
        }
    }
    else if (number < 0) 
    {
        printf("Number entered is negative\n");
        if (number % 2 == 0) 
        {
         printf("and it is an EVEN number.\n");
        } 
        else 
        {
         printf("and it is an ODD number.\n");
        }
    }
  
    else 
    {
     printf("The number is Zero.\n");
    }

    printf("\n");
    return 0;
}