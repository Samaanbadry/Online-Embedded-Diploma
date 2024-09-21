#include "stdio.h"
void main ()
{
    float x,y,z;
    printf ("Enter three numbers : ");
    scanf ("%f",&x);
    scanf ("%f",&y);
    scanf ("%f",&z);
    if (x>z)
    {
    if (x>y)
    printf ("Largest number = %.2f",x);
    else
        printf ("Largest number = %.2f",y);
    }
    else if (z>y)
     printf ("Largest number = %.2f",z);
}