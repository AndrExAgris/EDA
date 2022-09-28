#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca_valor(float *x, float *y);

int main(){

    float x, y;
    float *xp, *yp;

    xp = &x;
    yp = &y;

    printf("Digite o primeiro valor: ");
    scanf("%f", xp);

    printf("Digite o segundo valor: ");
    scanf("%f", yp);

    printf("Os valores originais são: %.2f e %.2f\n", *xp, *yp);

    troca_valor(xp,yp);

    printf("Os valores agora são: %.2f e %.2f\n", *xp, *yp);

    free(xp);
    free(yp);
    
    return 0;
}

void troca_valor(float *x, float *y){
    
    float a;
    a = *x;
    *x = *y;
    *y = a;
}