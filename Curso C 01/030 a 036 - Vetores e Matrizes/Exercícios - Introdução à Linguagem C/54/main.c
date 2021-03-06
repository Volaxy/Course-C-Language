#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 5, colunas = 10, c;
    char matriz[linhas][colunas], respostas[10] = {'a', 'c', 'd', 'b', 'b', 'b', 'b', 'c', 'e', 'a'};

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = 'b';
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%c ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\nGABARITO\n=================================================\n");

    for(int i = 0; i < colunas; i++){
        printf("%c ", respostas[i]);
    }

    printf("\n\nAcertos de cada aluno\n======================================\n");

    for(int i = 0; i < linhas; i++){
        c = 0;

        for(int j = 0; j < colunas; j++){
            if(matriz[i][j] == respostas[j]){
                printf("Acertou 1\n");
                c++;
            }else{
                printf("Errou 1\n");
            }
        }

        printf("O aluno %d acertou %d quetoes\n", i + 1, c);
    }

    return 0;
}
