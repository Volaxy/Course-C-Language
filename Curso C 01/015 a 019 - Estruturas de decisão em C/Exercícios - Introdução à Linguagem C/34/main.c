#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    int faltas;
    printf("Digite o numero de faltas e a nota\n");
    scanf("%d %f", &faltas, &nota);

    if(faltas <= 20){
        if(nota < 4){
            printf("A");
        }

        if(nota < 5){
           printf("B");
        }

        if(nota < 7.5){
            printf("C");
        }

        if(nota < 9){
            printf("D");
        }

        if(nota <= 10){
            printf("E");
        }

    }

    if(faltas > 20){
        if(nota < 4){
            printf("F");
        }

        if(nota < 5){
           printf("G");
        }

        if(nota < 7.5){
            printf("H");
        }

        if(nota < 9){
            printf("I");
        }

        if(nota <= 10){
            printf("J");
        }

    }

    return 0;
}
