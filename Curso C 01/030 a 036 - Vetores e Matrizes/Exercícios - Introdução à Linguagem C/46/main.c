#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 10, colunas = 10;
    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i < j){
                matriz[i][j] = 2 * i + 7 * j - 2;
            }else{
                if(i > j){
                    matriz[i][j] = 4 * (i * i * i) - 5 * (j * j) + 1;
                }else{
                    matriz[i][j] = 3 * (i * i) - 1;
                }
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
