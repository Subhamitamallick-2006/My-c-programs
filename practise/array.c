#include<stdio.h>
void main()
{
    
    printf("Enter the values of the array\n");
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    } 
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("The bigget element in the array is : %d",max);
}