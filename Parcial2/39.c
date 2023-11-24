#include<stdio.h>
#include<stdlib.h>
#include"bib.h"

int** suma_matices_enteras(int** matriz1, int** matriz2, int m, int n){
    int i, j;
    int** matriz3;
    matriz3 = crear_matriz_entera(matriz3, m, n);
    for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
    return matriz3;
}