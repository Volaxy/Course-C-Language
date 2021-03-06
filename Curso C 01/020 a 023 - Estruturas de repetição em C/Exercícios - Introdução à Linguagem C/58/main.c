#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, eprimo = 1, soma = 0;

    printf("Digite dois intervalos\n");
    scanf("%d %d", &a, &b);

    for(int inicio = a; inicio <= b; inicio++){
        for(int i = 2; i < inicio; i++){
            if(inicio % i == 0){
                i = inicio;
                eprimo = 0;
            }
        }

        if(eprimo == 1){
            soma += inicio;
        }else{
            eprimo = 1;
        }
    }

    printf("A soma dos numeros primos e %d\n", soma);

    return 0;
}
