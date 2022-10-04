#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float *maiorMed( float *vet, int n);

int main(){

    srand(time(NULL));

    int n = 5;

    float *vet = malloc(sizeof(float) * n);

    printf("O vetor original é:\n ");
    for (int i = 0; i < n; i++)
    {   
        vet[i] = rand() % 100;
        printf("%.2f ", vet[i]);
    }
    printf("\n ");

    float *medVet = maiorMed(vet, n); 

    printf("O novo vetor é:\n ");
    for (int i = 0; i < n; i++)
    {   
        if(medVet[i]!=0.00){
            printf("%.2f ", medVet[i]);
        }
    }
    printf("\n ");

}


float *maiorMed( float *vet, int n){

    float aux = 0;

    for (int i = 0; i < n; i++)
    {   
        aux+=vet[i];
    }

    aux = aux/n;

    float *newVet = malloc(sizeof(float));

    int vetsize = 0;

    for (int i = 0; i < n; i++)
    {   
        if(vet[i]>=aux){
            newVet = realloc(newVet, vetsize+1);
            newVet[vetsize] =  vet[i];
            vetsize++;
        }
    }

    return newVet;

}
