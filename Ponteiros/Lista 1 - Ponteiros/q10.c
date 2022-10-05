#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 );

int main(){

    int n1 = 7, n2 = 4, n3;
    int *p3 = &n3;

    int *v1 = malloc(sizeof(int) * n1);
    int *v2 = malloc(sizeof(int) * n2);

    printf("O vetor 1 é:\n ");
    for (int i = 0; i < n1; i++)
    {   
        v1[i] = rand() % 100;
        printf("%d ", v1[i]);
    }
    printf("\n ");

    printf("O vetor 2 é:\n ");
    for (int i = 0; i < n2; i++)
    {   
        v2[i] = rand() % 100;
        printf("%d ", v2[i]);
    }
    printf("\n ");

    int *fusao = uniao(v1, n1, v2, n2, p3 );

    printf("O vetor Resultante da uniao é:\n ");
    for (int i = 0; i < *p3; i++)
    {   
        printf("%d ", fusao[i]);
    }
    printf("\n ");
    
    free(v1);
    free(v2);
    free(fusao);
    return 0;
}


int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ){
    
    *p3 = (n1+n2);
    int aux = 0;

    int *resp = malloc(sizeof(int) * *p3);

    for (int i = 0; i < *p3; i++)
    {   
        if(aux<n1){
            resp[i] = v1[i];
            aux++;
        }else{
            resp[i] = v2[i-n1];
        }
    }

    return resp;
}
