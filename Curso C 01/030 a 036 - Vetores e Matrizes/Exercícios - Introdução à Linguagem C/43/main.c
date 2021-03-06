#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 4, colunas = 4;
    int matriz[linhas][colunas], linha, coluna, maior = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite um valor\n");
            matriz[i][j] = rand() % 20;

            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior elemento e o %d e se encontra na posicao [%d][%d] da matriz", maior, linha, coluna);

    return 0;
}
