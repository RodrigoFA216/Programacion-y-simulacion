#include <stdio.h>
#include <math.h>

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

int main() {
    struct DatosElectricos datos;
    datos.corriente = 5.0;
    datos.voltaje = 220.0;
    datos.anguloDesfase = 5.0;
    struct Potencias resultado = calcularPotencias(datos);
    printf("Potencia Real: %.2f\n", resultado.potenciaReal);
    printf("Potencia Aparente: %.2f\n", resultado.potenciaAparente);
    printf("Potencia Reactiva: %.2f\n", resultado.potenciaReactiva);
    return 0;
}