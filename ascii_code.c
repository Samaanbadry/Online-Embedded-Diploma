#include "stdio.h"
int main()
{
    char x;
    int y;
    printf ("Enter a Character : ");
    scanf ("%c",&x);
    y= x;
    printf ("ASCII Value of %C is %d", x , y);
    return 0;
}