#include "stdio.h"
void main () {
    int x,i=0;
    printf ("Enter a number to write from 0 to n : ");
    scanf ("%d",&x);
    //loko(x);
    while (i<=x)
    {
        loko(x, i);
        i++;
    }
}


int loko(int x, int y){
    while (y<x) {
        printf ("%d ",y);
        
        y++;
    }
    printf("\n");   
    //return y;
}