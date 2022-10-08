#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"
#include "Pilha.h"

//declaracoes de funcoes


//codigo principal

int main(){

    int p, init;
    Matriz mat;
    Pilha pil;

    scanf("%d", &p);

    inicializa_matriz(&mat, p, p);
    for(int i = 0; i < p; i++ ){
        for(int j = 0; j < p; j++ ){
            scanf("%d", &(&mat)->dados[i][j] );
        }
    }	
    mostra_matriz(mat); //temp

    scanf("%d", &init);

    int *vs = malloc(sizeof(int) * p);
    for(int i = 0 ; i < p ; i++ ){
        vs[i] = 0;
    }

    inicializa_pilha(&pil);

    empilha(&pil, init);

    while(pil.topo != -1){

        int x, *xp;
        xp = &x;

        desempilha(&pil, xp);

        if (vs[x-1]==0){
            printf("%d\n", x);
            vs[x-1] = 1;
            for(int i = 0 ; i < p; i++ ){
               if(mat.dados[x-1][i] == 1){
                    if(vs[i]==0){
                        empilha(&pil, i);
                    }
               }
            }
        }
        

        





    }








    libera_matriz(&mat);
    return 0;
}

//codigo das funcoes declaradas
