#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;

    printf("Digite um dia, mes e ano\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(mes > 12){
        printf("Mes invalido\n");
    }

    if(ano % 4 == 0 || ano % 400 == 0){
        if(ano % 400 == 0 && ano % 100 == 0){
            if(mes == 2 && dia > 29){
                printf("Dia invalido\n");
            }
        }
    }
}
