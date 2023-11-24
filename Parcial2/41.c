#include<stdio.h>
#include<stdlib.h>
#include"bib.h"

int main(){
    int **mat1, **mat2, **mat3;
    int m = 5 ,n = 5;
    mat1 = crear_matriz_entera(mat1, m, n);
    mat2 = crear_matriz_entera(mat2, m, n);
    mat3 = crear_matriz_entera(mat3, m, n);
    mat1 = llenado_matrix_int_rand(mat1, m, n);
    mat2 = llenado_matrix_int_rand(mat2, m, n);
    mat3 = suma_matices_enteras(mat1, mat2, m, n);
    int i = m, j = n;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        
    }
    
}

