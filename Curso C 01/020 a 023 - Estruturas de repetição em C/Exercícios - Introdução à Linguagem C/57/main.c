#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, eprimo = 1, numerosprimos = 0;

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
            numerosprimos++;
        }else{
            eprimo = 1;
        }
    }

    printf("Existem %d numeros primos no intervalo que voce digitou\n", numerosprimos);

    return 0;
}
