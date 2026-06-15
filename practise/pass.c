#include<stdio.h>
void main()
{
    int p=743126;
    for(int i=0;i<=999999;i++)
    {
        if(i==p)
        {
            
        printf("Password found : %d\n",i);
        break;
        }
        else
        printf("Number checked : %d\n",i);
    }
}