#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *repetidor( char *s, int n );

int main(){

    int rep;
    char str[20];

    printf("Digite a string: \n");
    scanf("%s", str);

    printf("Digite quantas vezes sera repetida: \n");
    scanf("%d", rep);

    char strrep[] = repetidor( str, rep );

    
}

char *repetidor( char *s, int n ){
    
    float *vClone = malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++)
    {   
        vClone[i] = v[i];
    }

    return vClone;
}
