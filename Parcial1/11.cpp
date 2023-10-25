/* que pasa si en el programa se cambia struct x union?*/
# include <stdio.h>

int main(){
    union datos{
        int a;
        float x;
    };
    union datos d1;
    printf("Dame un dato: "); scanf("%i", &d1.a);
    printf("Dame otro dato: "); scanf("%f", &d1.x);
    printf("Los datos queme diste son: %i %f y sumados son %f", d1.a, d1.x, (float)d1.a + (float)d1.x);
}
/*Struct asigna memoria para cada uno de sus miembros*/
/*Union asigna memoria solo para el miembro mayor, en este caso el flotante*/
/*en caso de tener el mismo tipo de datos solo reserva meoria para un dato*/