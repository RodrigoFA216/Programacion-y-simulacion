/*Programa2.c */

#include <stdio.h>

int main (void)
{
	int a, b, c;
	/*printf y scanf son funciones para unix y linux*/
	printf("a="); scanf("%d",&a); 
	printf("b="); scanf("%d",&b);
	c = a + b;
	printf("c= %d\n",c);
}
