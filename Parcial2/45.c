#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include"bib.h"

int main(void){
    srand48((long int)time(NULL));
    int *mivect1, *mivect2;
    int n, a;
    scanf("%d",&n);
    mivect1 = crear_vector_entero(mivect1,n);
    mivect1 = llenar_vector_entero_rand(mivect1, n);
    printf("\nvector 1\n");
    imprimir_vector_int(mivect1, n);
    mivect2 = crear_vector_entero(mivect2,n);
    mivect2 = llenar_vector_entero(mivect2, n);
    printf("\nvector 2\n");
    imprimir_vector_int(mivect2, n);

    printf("\nvector suma\n");
    imprimir_vector_int(sumarvectoresenteros(mivect1, mivect2, n),n);

    printf("\nvector multiplicado\n");
    printf("\nnumero a multiplicar");scanf("%d",&a);
    imprimir_vector_int(multiplicarvector(mivect1, a, n),n);
}