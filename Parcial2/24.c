// Bibliotecas
#include<stdio.h>
//prototipos de función
float suma (int, int);
// Constantes simbólicas
#define PI 3.141592653589793
// variables permanentes
int a, b;

//funcion main
int main (void){
    float c;
    printf("a = ");scanf("%d",&a);
    printf("\nb = ");scanf("%d",&b);
    c = suma(a,b);
    printf("c = %f\n", c);
    return 0;
}   

float suma (int x, int y) {
    float z;
    z = (float)x + (float)y;
    return z;
}