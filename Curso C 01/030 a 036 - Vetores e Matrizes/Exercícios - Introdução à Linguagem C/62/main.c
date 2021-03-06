#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 3, colunas = 3;
    int m1[linhas][colunas], m2[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            m1[i][j] = rand() % 50;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            m2[i][j] = rand() % 50;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", m1[i][j] * m2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
