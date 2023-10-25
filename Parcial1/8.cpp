
/* Es un sistema dinamico lineal con parametros*/
/* varieantes en el tiempo y recursivo y de primer orden estable*/

#include<stdio.h>
#define INICIO 0
#define FIN 100
#define A 0.5 /* Si A esta entre -1<A<1 funciona*/
#define VALOR_INICIO 0.3
int main (void)
{
	int K;
	float y = VALOR_INICIO;
	for(K = INICIO; K < FIN;K++)
	{
		printf("y=%f/n",y);
		y = A*y;
	}
}
