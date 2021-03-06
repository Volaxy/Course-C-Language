#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 5, colunas = 4;
    int alunos[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 3; j++){
            switch(j){
                case 0:
                    printf("Numero da matricula\n");
                    alunos[i][j] = rand() % 100;
                    break;
                case 1:
                    printf("Media das provas\n");
                    alunos[i][j] = rand() % 6;
                    break;
                case 2:
                    printf("Media das trabalhos\n");
                    alunos[i][j] = rand() % 4;
            }
        }
    }

    for(int i = 0; i < linhas; i++){
        alunos[i][3] = alunos[i][1] + alunos[i][2];
    }

    int maior = 0, matricula;

    for(int i = 0; i < linhas; i++){
        if(alunos[i][3] > maior){
            maior = alunos[i][3];
            matricula = alunos[i][0];
        }
    }

    printf("O aluno com maior nota tem nota %d e numero de matricula %d\n", maior, matricula);

    float media = 0;

    for(int i = 0; i < 4; i++){
        media += alunos[i][3];
    }

    media /= 5;

    printf("A media dos alunos e %f\n", media);

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", alunos[i][j]);
        }

        printf("\n");
    }

    return 0;
}
