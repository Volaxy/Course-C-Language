#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pedido;
    printf("Digite o codigo do produto\n");
    scanf("%d", &pedido);

    switch(pedido){
        case 100:
            printf("Voce deve pagar 1.2");
            break;
        case 101:
            printf("Voce deve pagar 1.3");
            break;
        case 102:
            printf("Voce deve pagar 1.5");
            break;
        case 103:
            printf("Voce deve pagar 1.2");
            break;
        case 104:
            printf("Voce deve pagar 1.7");
            break;
        case 105:
            printf("Voce deve pagar 2.2");
            break;
        case 106:
            printf("Voce deve pagar 1");
            break;
    }

    return 0;
}
