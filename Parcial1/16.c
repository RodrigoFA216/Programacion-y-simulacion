#include <stdio.h>

void main (void){
    float x;
    char y[10];
    printf("X = ");scanf("%f", &x);
    sprintf(y, "%f", x);
    printf("x flotante = %f \n", x); //imprime valor flotante
    printf("x string = %s \n", y); //imprime un string de datos

}