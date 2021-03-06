#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float n1, n2;
    printf("Qual operacao voce deseja fazer:\n=========\n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n=========\n");
    scanf("%d", &opcao);

    printf("Digite dois valores\n");
    scanf("%f %f", &n1, &n2);

    switch(opcao){
        case 1:
            printf("Resultado: %f", n1 + n2);
            break;
        case 2:
            printf("Resultado: %f", n1 - n2);
            break;
        case 3:
            printf("Resultado: %f", n1 / n2);
            break;
        case 4:
            printf("Resultado: %f", n1 * n2);
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}
