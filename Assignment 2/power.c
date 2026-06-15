#include<stdio.h>
#include<math.h>
void main()
{
    printf("Enter the number :");
    int a,b,c;
    scanf("%d",&a);
    printf("Enter the power :");
    scanf("%d",&b);
    c=pow(a,b);
    printf("The value of x^y is : %d \n",c);
}