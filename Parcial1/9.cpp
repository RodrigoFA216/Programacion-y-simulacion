# include <stdio.h>

int main(){
    struct datos{
        int a;
        float x;
        #define z 0.15
    };
    struct datos d1;
    printf("Dame un dato: "); scanf("%i", &d1.a);
    printf("Dame otro dato: "); scanf("%f", &d1.x);
    printf("Los datos queme diste son: %i %f y sumados son %f", d1.a, d1.x, d1.a+d1.x);
}