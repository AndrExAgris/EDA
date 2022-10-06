#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int *vet = malloc(sizeof(int)*10);

    for (int i = 0; i < 10; i++)
    {
        vet[i] = rand() % 100;
        printf("%d ", vet[i]);
    }
    printf("\n\n");

    printf("%d ", *(vet-2));

    printf("\n");

    return 0;
}

