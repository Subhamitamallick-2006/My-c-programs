#include<stdio.h>
void main()
{
    printf("Enter the upper limit of the range : ");
    int n;
    int i=1;
    scanf("%d",&n);
    printf("The odd numbers from 1-%d are :\n",n);
    while(i<=n)
    {
        if(i%2==1)
        printf("%d ",i);
        i++;
    }
}