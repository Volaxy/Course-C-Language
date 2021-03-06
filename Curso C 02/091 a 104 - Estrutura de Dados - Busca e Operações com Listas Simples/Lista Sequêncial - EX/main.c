#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void printVector(int* vector, int lenght) {
    for(int i = 0; i < lenght; i++) {
        printf("Value %d: %d\n", i, vector[i]);
    }
}

int* allocVector(int lenght) {
    int *aux;

    aux = (int*)malloc(lenght * sizeof(int));

    return aux;
}

int main()
{
    /*int vector[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size;

    printVector(vector, TAM);

    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vector[i]);
    }

    printVector(vector, TAM);*/

    int size;

    printf("\nSize of the list: ");
    scanf("%d", &size);

    int *newVector = allocVector(size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &newVector[i]);
    }

    printVector(newVector, size);

    free(newVector);
    newVector = NULL;

    return 0;
}
