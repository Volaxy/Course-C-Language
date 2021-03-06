#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 5, colunas = 5;
    int matriz[linhas][colunas], numeros[25], c = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 99;
            //numeros[c] = matriz[i][j];

            for(int k = 0; k < c; k++){
                if(matriz[i][j] == numeros[k]){
                    printf("Numero repetido: %d, gerando novo numero...\n", numeros[k]);
                    matriz[i][j] = rand() % 99;
                    k = 0;
                }
            }

            numeros[c] = matriz[i][j];
            c++;
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
