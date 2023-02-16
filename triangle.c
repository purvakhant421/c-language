#include <stdio.h>
main()
{
    float h,b;
    printf("Enter height of triangle:");
    scanf("%f",&h);
    printf("Enter base of triangle:");
    scanf("%f",&b);
    float area;
    area = h * b * 0.5;
    printf("Area of triangle is:%f",area);
}
