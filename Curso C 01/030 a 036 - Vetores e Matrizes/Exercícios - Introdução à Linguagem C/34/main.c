#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10], n;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &n);

        for(int j = 0; j < i; j++){
            if(numeros[j] == n){
                printf("Numero invalido, digite de novo\n");
                scanf("%d", &n);

                j = -1;
            }
        }

        numeros[i] = n;
    }

    for(int i = 0; i < 10; i++){
        printf("Vetor: %d\n", numeros[i]);
    }

    return 0;
}
