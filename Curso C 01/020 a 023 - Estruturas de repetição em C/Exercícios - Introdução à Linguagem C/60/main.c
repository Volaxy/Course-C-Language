#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior = 0, menor = 10000, numero;
    float media, soma = 0, qnt = 0, somap = 0, qntp = 0, mediap;

    do{
        numero;

        printf("Digite um numero\n");
        scanf("%d", &numero);

        soma += numero;
        qnt++;
        media = soma / qnt;

        if(numero != 0){
            if(numero > maior){
                maior = numero;
            }else{
                if(numero < menor){
                    menor = numero;
                }
            }
        }

        if(numero % 2 == 0){
            qntp++;
            somap += numero;

            mediap = somap / qntp;
        }
    }while(numero != 0);

    printf("A soma dos numeros foi %f\n", soma);
    printf("A quantidade de numeros foi %f\n", qnt);
    printf("A media dos numeros foi %f\n", media);
    printf("O maior numero foi %d\n", maior);
    printf("O menor numero foi %d\n", menor);
    printf("A media dos numeros pares foi %f\n", mediap);

    return 0;
}
