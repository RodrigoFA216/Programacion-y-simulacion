/* Que hace este programa*/ 
/* constantes simbolicas*/ 

#include<stdio.h>
/* Tienen un direccion de memoria inamovible*/ 
#define PI 3.1415

int main (void)
{
	float r;
	printf("r="); scanf("%f",&r);
	printf("Area del circulo=%f\n", PI*r*r);
}
