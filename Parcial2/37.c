#include<stdio.h>
#include<stdlib.h>

int** crear_matriz_entera(int** matriz, int m, int n){
    int i,j;
    matriz = (int**) calloc(m, sizeof(int*));
    for (j = 0; j < n; j++)
        matriz[j] = (int*) calloc(n, sizeof(int));
    return matriz;
}
