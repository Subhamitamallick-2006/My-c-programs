#include<stdio.h>
void main()
{
    printf("Enter a year : ");
    int a;
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a%400==0)
        printf("%d is a leap year",a);
        else
        printf("%d is not a leap year",a);
    }
    else if(a%4==0)
    printf("%d  is a leap year",a);
    else
    printf("%d is not a leap year",a);
}