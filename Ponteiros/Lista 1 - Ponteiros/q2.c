#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main(){

    float raio, perimetro, area;
    float *pPerimetro, *pArea;

    pPerimetro = &perimetro;
    pArea = &area; 

    printf("Digite o raio: ");
    scanf("%f", &raio);

    calcula_circulo(raio, pPerimetro, pArea);

    printf("O perimetro é: %.2f\n", *pPerimetro);
    printf("A area é: %.2f\n", *pArea);
    
    return 0;
}

void calcula_circulo(float raio, float *pPerimetro, float *pArea){
    
    *pPerimetro = (raio*2)*3.1415926;

    *pArea = (raio*raio)*3.1415926;
}