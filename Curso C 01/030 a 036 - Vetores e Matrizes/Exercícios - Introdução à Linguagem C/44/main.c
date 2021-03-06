#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 5, colunas = 5;
    int matriz[linhas][colunas], x, encontrou = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite um valor\n");
            matriz[i][j] = rand() % 20;
        }
    }

    printf("Digite um valor x\n");
    scanf("%d", &x);

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(x == matriz[i][j]){
                printf("Valor encontrado na posicao [%d][%d]\n", i, j);
                encontrou++;
            }
        }
    }

    if(encontrou == 0){
        printf("Valor nao encontrado\n");
    }

    return 0;
}
