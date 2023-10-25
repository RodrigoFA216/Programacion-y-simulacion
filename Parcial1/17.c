#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define MAX 20

int main (void){
    int des, k;
    float x;
    char buffer[10];
    des = open("./archivo.txt", O_WRONLY | O_TRUNC | O_CREAT);
    for (k = 0 ; k < MAX ; k++){
        x = (float)k;
        sprintf(buffer, "%f", x);
        write(des, buffer, sizeof(buffer));
    }
    close(des);
}