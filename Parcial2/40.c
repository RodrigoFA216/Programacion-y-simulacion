#include<stdio.h>
#include<stdlib.h>
#include"bib.h"

int** llenado_matrix_int (int** matrix, int m, int n){
    int i, j;
    for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            printf("matrix[%d][%d]= ", i, j);scanf("%d", &matrix[i][j]);
    return matrix;
}