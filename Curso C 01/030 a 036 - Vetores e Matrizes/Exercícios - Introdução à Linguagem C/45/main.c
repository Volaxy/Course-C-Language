#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 4, colunas = 4;
    int matriz1[linhas][colunas], matriz2[linhas][colunas], maiores[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite um valor para a matriz 1\n");
            matriz1[i][j] = rand() % 50;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite um valor para a matriz 2\n");
            matriz2[i][j] = rand() % 50;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz1[i][j] > matriz2[i][j]){
                maiores[i][j] = matriz1[i][j];
            }else{
                maiores[i][j] = matriz2[i][j];
            }
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", maiores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
