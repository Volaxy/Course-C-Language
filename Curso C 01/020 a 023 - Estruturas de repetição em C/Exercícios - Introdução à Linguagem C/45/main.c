#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float km, m;

    while(opcao != 3){
        printf("1 - Converter km/h para m/s.\n");
        printf("2 - Converter m/s para km/h.\n");
        printf("3 - Sair do programa.\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o km/h\n");
                scanf("%f", &km);

                m = km / 3.6;

                printf("Velocidade em m/s: %f\n", m);
                break;
            case 2:
                printf("Digite o m/s\n");
                scanf("%f", &m);

                km = m * 3.6;

                printf("Velocidade em km/h: %f\n", km);
                break;
        }
    }

    return 0;
}
