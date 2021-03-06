#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, lidos = 0, pares = 0;

    while(n != 1000){
        printf("Digite um numero\n");
        scanf("%d", &n);
        lidos++;

        if(n % 2 == 0){
            printf("Par\n");
            pares++;
        }else{
            printf("Impar\n");
        }
    }

    printf("Valores lidos: %d\n", lidos);
    printf("Valores pares: %d", pares);

    return 0;
}
