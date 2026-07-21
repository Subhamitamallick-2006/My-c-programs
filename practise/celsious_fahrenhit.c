#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter temperature in celsious scale : ");
    scanf("%f",&C);
    F=1.8*C +32;
    printf("temperature in fahrenhit :");
    printf("%.2f\n",F);
    return 0;

}