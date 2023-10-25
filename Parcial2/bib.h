// Biblioteca

//constantes
#define PI 3.141592653589793

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