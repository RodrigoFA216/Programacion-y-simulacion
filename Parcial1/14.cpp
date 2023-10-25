#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX 10

int main (void){
    int k, des;
    des = open("./datos.x", O_TRUNC | O_CREAT | O_WRONLY);
    for (k = 0; k<MAX; k++)
        write(des, &k, sizeof(k));
    close(des);
}