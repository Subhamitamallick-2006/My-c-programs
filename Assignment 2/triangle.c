# include <stdio.h>
int main()
{
    float a,b,c;
    float area,perimeter;
    float height;
    
    printf("Enter side a:");
    scanf("%f",&a);
    printf("Enter side b:");
    scanf("%f",&b);
    printf("Enter side c:");
    scanf("%f",&c);
    printf("Enter height:");
    scanf("%f",&height);

    area=0.5*a*height;
    perimeter=a+b+c;

    printf("area=%2f\n",area);
    printf("permiter=%2f\n",perimeter);
    return 0;

}