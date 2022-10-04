#include <stdio.h>
#include <stdlib.h>

int *maiorMenor( int *vet, int n, int *pos, int *neg);

int main(){

    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);
    int *vet = malloc(sizeof(int)*n);

    printf("Digite cada valor do vetor seguido de um enter:\n ");
    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &vet[i]);
    }
    printf("\n ");

    int *pos = malloc(sizeof(int));
    int *neg = malloc(sizeof(int));

    maiorMenor(vet, n, pos, neg);

    printf("Vetor positivo:\n ");
    for (int i = 0; i < n; i++)
    {   
        if(pos[i]!=0){
            printf("%d ", pos[i]);
        }
    }
    printf("\n ");

    printf("Vetor negativo:\n ");
    for (int i = 0; i < n; i++)
    {   
        if(neg[i]!=0){
            printf("%d ", neg[i]);
        }
    }
    printf("\n ");

    free(vet);
    free(pos);
    free(neg);
    return 0;
}


int *maiorMenor( int *vet, int n, int *pos, int *neg){

    int posAux = 0, negAux = 0;

    for (int i = 0; i < n; i++)
    {   
        if(vet[i]>0){
            pos = realloc(pos, posAux+1);
            pos[posAux] = vet[i];
            posAux++;
        }
        if(vet[i]<0){
            neg = realloc(neg, negAux+1);
            neg[negAux] = vet[i];
            negAux++;
        }
    }

    return 0;
}
