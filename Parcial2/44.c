#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include"bib.h"

int main(void){
    srand48((long int)time(NULL));
    int *mivect, n;
    scanf("%d",&n);
    mivect = crear_vector_entero(mivect,n);
    mivect = llenar_vector_entero_rand(mivect, n);
    imprimir_vector_int(mivect, n);
}