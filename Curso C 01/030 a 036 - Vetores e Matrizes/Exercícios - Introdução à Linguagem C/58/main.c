#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 3, colunas = 3;
    int numeros[linhas][colunas], soma[3];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite um numero\n");
            numeros[i][j] = (rand() % 75) - (rand() % 100);
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", numeros[i][j]);
        }

        printf("\n");
    }

    for(int j = 0; j < colunas; j++){
        soma[j] = 0;

        for(int i = 0; i < linhas; i++){
            soma[j] += numeros[i][j];
        }
    }

    printf("\n");

    for(int i = 0; i < linhas; i++){
        printf("%d ", soma[i]);
    }

    return 0;
}
