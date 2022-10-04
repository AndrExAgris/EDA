#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cacula_hora(int totalMinutos, int *ph, int *pm);

int main(){

    int totalMinutos, h, m;
    int *ph, *pm;

    ph = &h;
    pm = &m;

    printf("Digite o quantos minutos se passaram desde as 00:00h de hoje: ");
    scanf("%d", &totalMinutos);

    cacula_hora(totalMinutos, ph, pm);

    printf("Agora é %2d:%2d\n", *ph, *pm);
    
    free(ph);
    free(pm);

    return 0;
}

void cacula_hora(int totalMinutos, int *ph, int *pm){
    
    *ph = round(totalMinutos/60);
    *pm = totalMinutos - round(totalMinutos/60)*60;
}