#include "stdio.h"
void main ()
{
    char x;
    printf ("Enter an alphabet : ");
    scanf ("%c",&x);
    if((x==65)||(x==69)||(x==73)||(x==79)||(x==85)||(x==97)||(x==101)||(x==105)||(x==111)||(x==117))
    printf ("%C is a vowel",x);
    else
    printf ("%C is a consonant",x);
}