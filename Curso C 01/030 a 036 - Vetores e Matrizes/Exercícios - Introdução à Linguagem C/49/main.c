#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 3, colunas = 3;
    int matriz[linhas][colunas], soma = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite um valor\n");
            matriz[i][j] = rand() % 10;

            if(j == i){
                 soma += matriz[i][j];
            }
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("A soma e %d", soma);

    return 0;
}
