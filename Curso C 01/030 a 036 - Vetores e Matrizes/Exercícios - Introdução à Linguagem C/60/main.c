#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 3, colunas = 6;
    float valores[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            valores[i][j] = rand() % 100;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%f ", valores[i][j]);
        }

        printf("\n");
    }

    float soma = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(j % 2 != 0){
                soma += valores[i][j];
            }
        }
    }

    printf("A soma e %f\n", soma);

    float media;
    soma = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 1; j < colunas; j += 2){
            soma += valores[i][j];
        }
    }

    media = soma / 6;
    printf("A media e %f\n", media);

    for(int i = 0; i < linhas; i++){
        valores[i][5] = valores[i][0] + valores[i][1];
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%f ", valores[i][j]);
        }

        printf("\n");
    }

    return 0;
}
