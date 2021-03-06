#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int soma = 5, eprimo = 1;

    for(int numero = 4; numero < 2000000; numero++){
        for(int i = 2; i < numero; i++){
            if(numero % i == 0){
                i = numero;
                eprimo = 0;
            }
        }

        if(eprimo == 1){
            soma += numero;
        }else{
            eprimo = 1;
        }
    }

    printf("A soma e %d", soma);

    return 0;
}
