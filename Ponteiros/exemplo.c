#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int x;
    int *xp;

    xp = &x;

    printf("O conteudo de x é: %d\n", *xp);
    printf("O endereço de x é: %p\n", xp);

    return 0;
}