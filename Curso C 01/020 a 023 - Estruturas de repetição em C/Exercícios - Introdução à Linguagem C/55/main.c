#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, numero = 4, eprimo = 1, soma = 5;

    printf("Digite um numero\n");
    scanf("%d", &contador);
    printf("==============\n");

    if(contador < 1){
        printf("Valor invalido\n");
    }else{
        switch(contador){
            case 1:
                printf("A soma e 2");

                break;
            case 2:
                printf("A soma e 5");
                break;
            default:
                for(int j = 3; j <= contador; j++){
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
                        contador++;
                    }

                    numero++;
                }

                printf("A soma e %d", soma);
        }
    }

    return 0;
}
