#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15];

    for(int i = 0; i < 15; i++){
        vetor[i] = rand() % 50;
    }

    for(int i = 0; i < 15; i++){
        printf("Vetor: %d\n", vetor[i]);
    }

    for(int i = 0; i < 15; i++){
        if(vetor[i] == 0){
            for(int j = i; j < 14; j++){
                vetor[j] = vetor[j + 1];
            }
        }
    }

    for(int i = 0; i < 15; i++){
        printf("Vetor formatado: %d\n", vetor[i]);
    }

    return 0;
}
