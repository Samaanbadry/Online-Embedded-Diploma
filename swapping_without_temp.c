#include "stdio.h"
int main()
{
    float a,b;
    printf ("Enter value of a : ");
    scanf ("%f",&a);
    printf ("Enter value of b : ");
    scanf ("%f",&b);
    a=a+b; // I do it from internet (not from myself)
    b=a-b;
    a=a-b;
    printf ("After swapping, value of a = %.2f \n",a);
    printf ("After swapping, value of b = %.1f",b);
}