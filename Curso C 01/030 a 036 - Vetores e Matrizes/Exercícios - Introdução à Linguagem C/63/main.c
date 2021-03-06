#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 3, colunas = 3;
    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 50;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j] * matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
