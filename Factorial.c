#include "stdio.h"
void main ()
{
    int x, i=1, fact=1;
    printf ("Enter an integer : ");
    scanf ("%d",&x);
    if (x<0)
        printf ("Error!!! Factorial of negative number doesn't exist.");
    else if (x==0)
        printf ("Factorial = %d",fact);
    else
    {
        while (i<=x)
        {
            fact*=i;
            i++;
        
        }
        printf ("Factorial = %d",fact);
    }       
}