#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float n1, n2;

    do{
        printf("==================================\nDigite uma opcao: \n");
        printf("1 - Adicao...\n");
        printf("2 - Subtracao...\n");
        printf("3 - Multiplicacao...\n");
        printf("4 - Divisao...\n");
        printf("5 - Saida...\n\n");
        scanf("%d", &opcao);

        printf("----------------\n");

        switch(opcao){
            case 1:
                printf("Digite dois numeros\n");
                scanf("%f %f", &n1, &n2);

                printf("O resultado e %f\n", n1 + n2);
                break;
            case 2:
                printf("Digite dois numeros\n");
                scanf("%f %f", &n1, &n2);

                printf("O resultado e %f\n", n1 - n2);
                break;
            case 3:
                printf("Digite dois numeros\n");
                scanf("%f %f", &n1, &n2);

                printf("O resultado e %f\n", n1 * n2);
                break;
            case 4:
                printf("Digite dois numeros\n");
                scanf("%f %f", &n1, &n2);

                printf("O resultado e %f\n", n1 / n2);
        }
    }while(opcao != 5);

    return 0;
}
