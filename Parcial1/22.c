#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double generarNumeroAleatorio(double min, double max) {
    double numeroAleatorio = drand48();
    return min + (max - min) * numeroAleatorio;
}

int main() {
    srand48((long int)time(NULL));
    double rangoMinimo = -1.0;
    double rangoMaximo = 1.0;
    for(int i = 0; i < 100 ; i++) {
        double resultado = generarNumeroAleatorio(rangoMinimo, rangoMaximo);
        printf("Número aleatorio en el rango [%f, %f): %f\n", rangoMinimo, rangoMaximo, resultado);
    }
    return 0;
}

/*
CARACTERÍSTICAS DE UN RUIDO
- pseudoaleatorio (drand48(), rand())
- acotado (-A, A)
- Media aritmética igual a 0
- Varianza acotada
*/