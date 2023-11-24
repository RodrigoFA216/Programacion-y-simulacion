// Biblioteca
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
//constantes
#define PI 3.141592653589793

struct DatosElectricos {
    float corriente;
    float voltaje;
    float anguloDesfase;
};


struct Potencias {
    float potenciaReal;
    float potenciaAparente;
    float potenciaReactiva;
};

struct Potencias calcularPotencias(struct DatosElectricos datos) {
    struct Potencias resultado;
    float anguloRad = datos.anguloDesfase * PI / 180.0;
    resultado.potenciaReal = datos.corriente * datos.voltaje * cos(anguloRad);
    resultado.potenciaAparente = datos.corriente * datos.voltaje;
    resultado.potenciaReactiva = datos.corriente * datos.voltaje * sin(anguloRad);
    return resultado;
}

//funcion suma
float suma (int a, int b) {
    return (float)a + (float)b;
}

//funcion area_circulo
float area_circulo (float a) {
    return PI * (a*a);
}

float resist_3_paralell (float a, float b, float c) {
    return (1/((1/a)+(1/b)+(1/c)));
}

//capacitancia
float capa_serie(float a, float b){
    return (1/((1/a)+(1/b)));
}

float capa_paralel(float a, float b){
    return (a+b);
}

double generarNumeroAleatorio(double min, double max) {
    double numeroAleatorio = drand48();
    return min + (max - min) * numeroAleatorio;
}
int generarNumeroAleatorioInt(int min, int max) {
    int numeroAleatorio = drand48();
    return min + (max - min) * numeroAleatorio;
}

int** crear_matriz_entera(int** matriz, int m, int n){
    int i,j;
    matriz = (int**) calloc(m, sizeof(int*));
    for (j = 0; j < n; j++)
        matriz[j] = (int*) calloc(n, sizeof(int));
    return matriz;
}

int** suma_matices_enteras(int** matriz1, int** matriz2, int m, int n){
    int i, j;
    int** matriz3;
    matriz3 = crear_matriz_entera(matriz3, m, n);
    for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
    return matriz3;
}

int** llenado_matrix_int (int** matrix, int m, int n){
    int i, j;
    for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            printf("matrix[%d][%d]= ", i, j);scanf("%d", &matrix[i][j]);
    return matrix;
}

int** llenado_matrix_int_rand (int** matrix, int m, int n){
    int i, j;
    for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            matrix[i][j] = (int)generarNumeroAleatorio((double)m, (double)n);
    return matrix;
}

//42
void imprimir_vector_int(int *vector, int n){
    int i;
    for ( i = 0; i < n; i++)
        printf("vector[%d] %d \n", i, vector[i]);
    
}

int *crear_vector_entero(int *vector, int n){
    vector = (int*)calloc(n, sizeof(int));
    return vector;
}

//43
int *llenar_vector_entero(int *vector, int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("vector[%d]", i);
        scanf("%d", &vector[i]);
    }
    return vector;
}

int *llenar_vector_entero_rand(int *vector, int n){
    int i, aux;
    int a=-5, b=5;
    for ( i = 0; i < n; i++)
    {
        aux = generarNumeroAleatorioInt(a,b);
        vector[i] = aux;
    }
    return vector;
}

int *sumarvectoresenteros(int *vect1, int *vect2, int n){
    int i, *vecres;
    vecres = crear_vector_entero(vecres, n);
    for ( i = 0; i < n; i++)
        vecres[i] = vect1[i] + vect2[i];
    return vecres;
}

int *multiplicarvector(int *vect1, int a, int n){
    int i, *vecres;
    vecres = crear_vector_entero(vecres, n);
    for ( i = 0; i < n; i++)
        vecres[i] = vect1[i] * a;
    return vecres;
}
