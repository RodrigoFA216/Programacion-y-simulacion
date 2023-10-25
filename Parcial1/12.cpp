/*Lectura y escritura en disco
Funciones:
- open()
- read()
- write()
- close()
*/

#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main (void) {
    int a, b, c, des;
    printf("a= "); scanf("%d", &a);
    printf("b= "); scanf("%d", &b);
    des = open("./archivo", O_TRUNC|O_CREAT|O_WRONLY|O_RDONLY);
    /*
        O_TRUNC SOBREESCRIBE
        O_CREAT CREA
        O_WRONLY ESCRITURA
        O_RDONLY LECTURA
    */
    c = a+b;
    write(des, &c, sizeof(c));
    close(des);
}
