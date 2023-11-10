#include <stdio.h>
#include <math.h>
#include "./bib.h"

#define PI 3.141592653589793



int main() {
    struct DatosElectricos datos;
    datos.corriente = 5.0;
    datos.voltaje = 220.0;
    datos.anguloDesfase = 0;
    struct Potencias resultado = calcularPotencias(datos);
    printf("Potencia Real: %.2f\n", resultado.potenciaReal);
    printf("Potencia Aparente: %.2f\n", resultado.potenciaAparente);
    printf("Potencia Reactiva: %.2f\n", resultado.potenciaReactiva);
    return 0;
}