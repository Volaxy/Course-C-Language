#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10], eprimo = 1;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero\n");
        numeros[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 2; j < numeros[i]; j++){
            if(numeros[i] % j == 0){
                eprimo = 0;
            }
        }

        if(eprimo == 1){
            printf("O elemento %d na posicao %d e primo\n", numeros[i], i);
        }else{
            eprimo = 1;
        }
    }

    return 0;
}
