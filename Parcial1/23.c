#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define INICIO 2
#define FIN 100
#define A 0.5 /* Si A esta entre -1<A<1 funciona*/
#define VALOR_INICIO 0.3

int main (void)
{
	int K;
	float y = VALOR_INICIO;
    int m  = drand48();
	for(K = INICIO; K < FIN;K++)
	{
        m = ((K-1) * m + drand48())/K;
		printf("m= %f \n", m);
		y = A * y;
	}
}
