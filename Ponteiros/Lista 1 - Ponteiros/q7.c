#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor( char *s, int n );

int main(){

    int rep;
    char str[50];

    printf("Digite a string: \n");
    scanf("%s", str);

    printf("Digite quantas vezes sera repetida: \n");
    scanf("%d", &rep);

    char *strrep = repetidor( str, rep );

    printf("A string ficou:\n%s\n", strrep);

    free(strrep);

    return 0;    
}

char *repetidor( char *s, int n ){
    
    char *vRep = malloc(sizeof(s) * n);

    for (int i = 0; i < (n*strlen(s)); i+=strlen(s))
    {   
        for(int j = 0; j < strlen(s); j++){
            vRep[(i+j)] = s[(j)];
        }
    }

    return vRep;
    free(vRep);
}
