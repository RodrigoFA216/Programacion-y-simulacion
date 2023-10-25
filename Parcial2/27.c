#include "./bib.h"
#include<stdio.h>

int main (void) {
    float r1, r2, r3;
    printf("\nR1 = ");scanf ("%f", &r1);
    printf("\nR2 = ");scanf ("%f", &r2);
    printf("\nR3 = ");scanf ("%f", &r3);
    float res = resist_3_paralell(r1,r2,r3);
    printf("\nRes = %f \n", res);
}