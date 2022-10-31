#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#include "Pilha.h"
#include "Matriz.h"


int main() {
	int p, init, final;
    Matriz mat;
    Pilha pil;
	Fila fil;
	int x, *xp;
    xp = &x;
    scanf("%d", &p);

    inicializa_matriz(&mat, p, p);
    for(int i = 0; i < p; i++ ){
        for(int j = 0; j < p; j++ ){
            scanf("%d", &(&mat)->dados[i][j] );
        }
    }	

	scanf("%d", &init);
	scanf("%d", &final);
	init -= 1;
	final -= 1;

    int *vs = malloc(sizeof(int) * p);
    for(int i = 0 ; i < p ; i++ ){
        vs[i] = 0;
    }

	int *va = malloc(sizeof(int) * p);
    for(int i = 0 ; i < p ; i++ ){
        va[i] = 0;
    }

	inicializa_fila(&fil, p);

	vs[init] = 1;

	inserir(&fil, init+1);

	int achou = 0;

	while (fila_vazia(fil) == 0 && achou == 0){
		remover(&fil, xp);
		if(x == final+1){
			achou = 1;
		}else{
			for(int i = 0 ; i < p; i++ ){
				if(mat.dados[x-1][i] == 1){
					if(vs[i]==0){
						vs[i] = 1;
						va[i] = x;
						inserir(&fil, i+1);
					}
				}
			}
		}
	}
	
	if (achou == 1){
		inicializa_pilha(&pil);
		while (x != 0){
			empilha(&pil, x);
			x = va[x-1];
		}
		while (pil.topo != -1){
			int temp;
			desempilha(&pil, &temp);
			printf("%d\n", temp);
		}
	}else{
		printf("B não é alcançável a partir de A!\n");
	}
	

	free(vs);
	free(va);
    libera_matriz(&mat);
	desaloca_fila(&fil);
	return 0;
}