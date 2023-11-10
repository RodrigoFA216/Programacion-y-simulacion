/*Hacer un programa en c tal que:
use una funcion para calcular la capacitancia equivalente de dos capacitores en serie y 
una para calcular dos capacitores en paralelo
*/
#include<stdio.h>
#include"./bib.h"

int main(){
    float a, b;
    printf("\n Ingresa todos los valores en picofaradios\n");
    printf("\n Capacitancia 1 = ");scanf("%f",&a);
    printf("\n Capacitancia 2 = ");scanf("%f",&b);
    printf("\n Capacitancia serie %f, paralelo %f", capa_serie(a,b), capa_paralel(a,b));
}