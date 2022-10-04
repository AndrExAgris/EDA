#include <stdio.h>
#include <stdlib.h>

float *clone( float *v, int n );

int main(){
    
    int tam;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tam);

    float vet[tam];

    printf("Digite cada item do vetor seguido de um enter: \n");
    for (int i = 0; i < tam; i++)
    {   
        scanf("%f", &vet[i]);
    }

    float *vclone = clone( vet,  tam );

    printf("O vetor é: \n");

    for (int i = 0; i < tam; i++)
    {   
        printf("%.2f\n", vclone[i]);
    }
    
}

float *clone( float *v, int n ){
    
    float *vClone = malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++)
    {   
        vClone[i] = v[i];
    }

    return vClone;
    free(vClone);
}
