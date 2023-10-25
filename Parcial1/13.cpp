#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main (void){
    int c, des;
    des = open("./archivo", O_RDONLY);
    read(des, &c, sizeof(c));
    printf("c = %d\n", c);
    close(des);
}