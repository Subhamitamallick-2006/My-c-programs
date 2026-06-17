#include<stdio.h>
void main()
{
    printf("Enter a number : ");
    int a;
    scanf("%d",&a);
    if((a%3==0)||(a%5==0))
    {
        printf("The number is divisible by 3 or 5\n");
    }
    else
    printf("The number is not divisible by 3 or 5\n");
}