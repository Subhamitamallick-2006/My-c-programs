#include<stdio.h>
void main()
{
    printf("Enter the value of the Nth term : ");
    int n;
    int s=0;
    int i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    printf("The sum of first %d natural numbers is : %d",n,s);
}