#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    printf("Digite um ano\n");
    scanf("%d", &ano);

    if(ano % 4 == 0 || ano % 400 == 0){
        if(ano % 400 == 0 && ano % 100 == 0){
            printf("Ano bisexto");
        }
    }

    return 0;
}
