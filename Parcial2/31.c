#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "./bib.h"

#define N 10

int main(){
    srand48((long int)time(NULL));
    float arreglo[3];
    int k;
    for ( k = 0; k < N; k++)
    {
        arreglo[0]= k;
        arreglo[1]= generarNumeroAleatorio(-5,5);
        arreglo[2]= arreglo[1]*k;
        printf("arreglo generado: [ %d, %f, %f ]\n", (int)arreglo[0], arreglo[1], arreglo[2]);
    }
}