// Biblioteca

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

