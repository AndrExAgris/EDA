#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main(){
    
    int tam, indice;
    int *pIndice;
    float max;
    float *pMax;

    pMax = &max;
    pIndice = &indice;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tam);

    float vet[tam];

    printf("Digite cada item do vetor seguido de um enter: \n");
    for (int i = 0; i < tam; i++)
    {   
        scanf("%f", &vet[i]);
    }

    max_vetor(vet, tam, pMax, pIndice);

    printf("O maior valor é: %.2f\n", *pMax);

    printf("O indice é é: %d\n", *pIndice);
    
}

void max_vetor(float vet[], int tam, float *pMax, int *pIndice){

    *pMax = -1000;

    for (int i = 0; i < tam-1; i++)
    {

        if(*pMax<vet[i]){
            *pMax = vet[i];
            *pIndice = i;
        }
    }

}
