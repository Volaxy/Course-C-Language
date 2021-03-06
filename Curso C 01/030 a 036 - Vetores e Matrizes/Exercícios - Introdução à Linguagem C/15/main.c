#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20];

    for(int i = 0; i < 20; i++){
        printf("Digite um numero\n");
        vetor[i] = rand() % 100;
    }

    for(int i = 0; i < 20; i++){
        for(int j = i + 1; j < 20; j++){
            if(vetor[i] > vetor[j]){
                int aux;

                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = vetor[i];
            }
        }
    }

    for(int i = 0; i < 20; i++){
        if(i > 0 && vetor[i] != vetor[i - 1]){
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
