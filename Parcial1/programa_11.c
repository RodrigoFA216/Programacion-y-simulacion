#include <stdio.h>
#include <math.h>

// Definición de la estructura para números complejos en formato rectangular
union ComplejoRectangular {
    double real;
    double imaginario;
};

// Función para convertir de formato polar a rectangular
union ComplejoRectangular convertirAPolar(double magnitud, double angulo) {
    union ComplejoRectangular resultado;
    resultado.real = magnitud * cos(angulo);
    resultado.imaginario = magnitud * sin(angulo);
    return resultado;
}

int main() {
    double magnitud, angulo;
    
    printf("Ingrese la magnitud del número complejo en formato polar: ");
    scanf("%lf", &magnitud);
    
    printf("Ingrese el ángulo (en radianes) del número complejo en formato polar: ");
    scanf("%lf", &angulo);
    
    // Llama a la función para convertir de polar a rectangular
    union ComplejoRectangular resultadoRectangular = convertirAPolar(magnitud, angulo);
    
    // Imprime el número complejo en formato polar
    printf("Número complejo en formato polar: %.2lf < %.2lf rad\n", magnitud, angulo);
    
    // Imprime el número complejo en formato rectangular
    printf("Número complejo en formato rectangular: %.2lf + %.2lf i\n", resultadoRectangular.real, resultadoRectangular.imaginario);
    
    return 0;
}
