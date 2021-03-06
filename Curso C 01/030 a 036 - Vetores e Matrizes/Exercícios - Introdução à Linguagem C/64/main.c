#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 20, colunas = 20;
    int matriz[linhas][colunas], linha, coluna;
    unsigned long int maior = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz[i][j] < 10){
                printf("0");
            }
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j += 4){
            if(matriz[i][j] * matriz[i][j + 1] * matriz[i][j + 2] * matriz[i][j + 3] > maior){
                maior = matriz[i][j] * matriz[i][j + 1] * matriz[i][j + 2] * matriz[i][j + 3];
                linha = i;
                coluna = j;
            }
        }
    }

    for(int j = 0; j < colunas; j++){
        for(int i = 0; i < linhas; i += 4){
            if(matriz[i][j] * matriz[i + 1][j] * matriz[i + 2][j] * matriz[i + 3][j] > maior){
                maior = matriz[i][j] * matriz[i + 1][j] * matriz[i + 2][j] * matriz[i + 3][j];
                linha = i;
                coluna = j;
            }
        }
    }

    for(int i = 0; i < linhas - 3; i++){
        for(int j = 0; j < colunas - 3; j++){
            if(matriz[i][j] * matriz[i + 1][j + 1] * matriz[i + 2][j + 2] * matriz[i + 3][j + 3] > maior){
                maior = matriz[i][j] * matriz[i + 1][j + 1] * matriz[i + 2][j + 2] * matriz[i + 3][j + 3];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("O maior numero e o %u e esta na posicao %d e %d", maior, linha, coluna);

    return 0;
}
