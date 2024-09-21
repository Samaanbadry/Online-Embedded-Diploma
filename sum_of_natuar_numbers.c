#include "stdio.h"
void main ()
{
    int sum=0,x,i=0;
    printf ("Enter an integer: ");
    scanf ("%d",&x);
    while (i<x)
    {
        i++;
        sum+=i;
    }
    printf ("sum = %d",sum);
}