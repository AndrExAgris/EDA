#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int *gera_vetor(int tam){
    int i;
    
    int *v = malloc( sizeof(int) * tam );

    for (i = 0; i < tam; i++){
        printf("Digite o %io termo do vetor: ", i+1);
        scanf("%i", &v[i]);

    }
    return v;
}

int maior_que_zero( int x ){
	return x > 0;
}

int menor_que_zero( int x ){
	return x < 0;
}

int *gera_vetor_novo(int *v, int tam, int *np, int (*compara)(int)  ){
    int i;
    *np = 0;
    int *vp = NULL;
    for (i = 0; i < tam; i++){
        if ( compara( v[i] ) ){ // Código polimórfico
            (*np)++;
            vp = realloc( vp, sizeof(int)*(*np));
            vp[(*np-1)] = v[i];
        }
    
    }
    return vp;
}

void imprime_vetor(int *v, int tam){
    int i;

    for (i = 0; i < tam; i++){
        printf("%i ", v[i]);
    }
    printf("\n");
    
}
int main(){
    int *v, *vn, *vp, n, np, nn;

    printf("Quantos termos terá o vetor? ");
    scanf("%i", &n);

    v = gera_vetor(n);

    printf("Vetor original: \n");
    imprime_vetor(v,n);

    vp = gera_vetor_novo(v, n, &np, maior_que_zero );
    printf("Vetor positivo: \n");
    imprime_vetor(vp,np);

    vn = gera_vetor_novo(v, n, &nn, menor_que_zero );
    printf("Vetor negativo: \n");
    imprime_vetor(vn,nn);

    return 0;
}