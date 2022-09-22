#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void max_min(int vet[], int tam, int *pMin, int *pMax);

int main(){
    
    int tam, min, max;
    int *pMin, *pMax;

    pMin = &min;
    pMax = &max;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tam);

    int vet[tam];

    printf("Digite cada item do vetor seguido de um enter: \n");
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }

    max_min(vet, tam, pMin, pMax);

    printf("O menor valor é: %d\n", *pMin);
    printf("O maior valor é: %d\n", *pMax);
    
}

void max_min(int vet[], int tam, int *pMin, int *pMax){

    *pMin = 10000000;
    *pMax = -1000000;

    for (int i = 0; i < tam-1; i++)
    {
        if(*pMin>vet[i]){
            *pMin = vet[i];
        }
        if(*pMax<vet[i]){
            *pMax = vet[i];
        }
    }
}