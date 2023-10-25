/* Hacer un programa en C tal que use 2 macros.*/ 
/* Una para el calculo de potencia y el otro calculo de resistencia*/
/* Pedir de teclado coltaje y corriente*/

#include<stdio.h>

#define W (c*v)
#define R (v/c)

int main (void)
{
	float c,v;
	printf("Corriente="); scanf("%f",&c);
	printf("Voltaje="); scanf("%f",&v);
	printf("Potencia=%f\n", W);
	printf("REsistencia=%f\n", R);
}
