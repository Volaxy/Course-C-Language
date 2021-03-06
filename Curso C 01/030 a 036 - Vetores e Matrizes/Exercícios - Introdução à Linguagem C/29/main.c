#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[6], soma = 0, impares = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite um numero\n");
        numeros[i] = rand() % 100;
    }

    for(int i = 0; i < 6; i++){
        if(numeros[i] % 2 == 0){
            printf("Numero par: %d\n", numeros[i]);
            soma += numeros[i];
        }else{
            printf("Numero impar: %d\n", numeros[i]);
            impares++;
        }
    }

    printf("A soma dos pares e %d\n", soma);
    printf("A quantidade de impares foi %d\n", impares);

    return 0;
}
