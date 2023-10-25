// Bibliotecas
#include<stdio.h>

//prototipos de función
float area_circulo (float);

// Constantes simbólicas
#define PI 3.141592653589793
// variables permanentes
int r;

//funcion main
int main (void){
    float c;
    printf("r = ");scanf("%d",&r);
    c = area_circulo(r);
    printf("c = %f\n", c);
    return 0;
}   

float area_circulo (float x) {
    float z;
    z = PI * (x*x);
    return z;
}