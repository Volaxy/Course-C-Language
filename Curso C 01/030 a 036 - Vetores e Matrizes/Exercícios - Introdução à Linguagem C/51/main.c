#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main()
{
    int linhas = 3, colunas = 3;
    int matriz1[linhas][colunas], matriz2[linhas][colunas], aux;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite um valor\n");
            matriz1[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            //0 0 = 0 0 | 1 0 = 0 1 | 2 0 = 0 2
            matriz2[i][j] = matriz1[j][i];
        }
    }

    printf("\n=======================\n");

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
