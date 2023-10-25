/* Que hace este programa*/ 

#include<stdio.h>
void main(void)
{
	int x, y;
	float a,b;
	printf("x="); scanf("%d",&x);
	printf("y="); scanf("%d",&y);
	/*printf("x+y=%f",x+y);*/
	/*Vamos a forzar una conversion de tipos */
	printf("x+y=%f", (float)x + (float)y);
}
