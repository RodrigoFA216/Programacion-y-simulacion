/* Que hace este programa*/ 


#include<stdio.h>

#define REQ (r1*r2)/(r1+r2)

int main (void)
{
	float r1,r2;
	printf("r1="); scanf("%f",&r1);
	printf("r2="); scanf("%f",&r2);
	printf("req paralelo=%f\n", REQ);
}
