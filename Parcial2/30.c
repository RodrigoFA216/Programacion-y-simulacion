#include <stdio.h>
#include <math.h>
#include "./bib.h"

#define N 5

int main (){
    int arreglo[N], k;
    for (k=0; k<N; k++){
        printf("arreglo[%d] = ", k);scanf("%d",&arreglo[k]);
    }
    printf("\nlos valores son:\n");
    for ( k = 0; k <N; k++)
    {
        printf("arreglo[%d] = %d \n", k, *(arreglo+k));
    }
    
}