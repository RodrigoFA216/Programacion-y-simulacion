#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define MAX 10
int main(void){
    int X, K, descriptor;
    descriptor = open("./datos.x", O_RDONLY);
    for (K = 0 ; K < MAX ; K++){
        read(descriptor, &X, sizeof(X));
        printf("leí: %d\n", X);
    }
    close(descriptor);
}
