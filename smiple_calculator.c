#include "stdio.h"
void main ()
{
    char x;
    float y , z;
    printf ("Enter operator either + or - or * or divide :  ");
    scanf ("%c",&x);
    printf ("Enter two operands : ");
    scanf ("%f %f ",&y,&z);
    switch (x)
    {
        case '+' : { 
            printf ("%.1f + %.1f = %.1f",y , z , y+z); break; } 
        case '-' : { 
            printf ("%.1f - %.1f = %.1f",y , z , y-z); break; } 
         case '*' : { 
            printf ("%.1f * %.1f = %.1f",y , z , y*z); break; } 
        case '/' : { 
            printf ("%.1f / %.1f = %.1f",y , z , y/z); break; } 
     default : {
            printf ("Error! operate isn't correct"); break;   }
    }
}