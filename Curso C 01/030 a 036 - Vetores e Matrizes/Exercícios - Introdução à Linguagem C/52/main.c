#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 4, colunas = 4;
    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Escreva um valor\n");
            matriz[i][j] = rand() % 20;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(j > i){
                matriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
