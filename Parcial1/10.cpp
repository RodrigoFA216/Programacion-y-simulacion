/*
hacer un programa tal que se ingrese un número complejo y lo guarde en una estructura en formato polar
lo convertirá a formato rectangular, lo guarda en otra estructura y lo imprimer
*/

#include <stdio.h>
#include <math.h>

int main (){
    struct polar{
        float magn;
        float ang;
    };
    struct polar d1;
    //
    printf("\nHola, ingresa un número complejo en magnitud por favor: ");scanf("%f", &d1.magn);
    printf("\nahora ingresa un número complejo en ángulo por favor: ");scanf("%f", &d1.ang);
    struct rectangular{
        float x;
        float y;
    };
    struct rectangular d3;
    //
    d3.x = d1.magn*(cos(d1.ang));
    d3.y = d1.magn*(sin(d1.ang));
    printf("El numero reportado en polar en rectangular es: %f %f", d3.x, d3.y);
}