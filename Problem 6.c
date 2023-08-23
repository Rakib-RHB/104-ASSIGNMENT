/*Write a C function that calculates the area of a
triangle given its base and height. The function
should take the base and height as inputs and return
the area.*/





#include <stdio.h>
double trianglearea(double b, double h)
{
    return  .5*b*h;
}
int main()
{
    double base, height;
    printf("Enter base value: ");
    scanf("%lf", &base);
    printf("Enter height value: ");
    scanf("%lf", &height);
    double area=  trianglearea(base, height);
    printf("Area = %.0lf\n", area);
}

