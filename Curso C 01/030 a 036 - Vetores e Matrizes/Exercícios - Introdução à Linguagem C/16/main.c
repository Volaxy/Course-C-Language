#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;
    float v[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um valor\n");
        scanf("%f", &v[i]);
    }

    printf("Digite um codigo\n");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            for(int i = 0; i < 5; i++){
                printf("%f\n", v[i]);
            }
            break;
        case 2:
            for(int i = 4; i >= 0; i--){
                printf("%f\n", v[i]);
            }
            break;
        default:
            printf("Codigo invalido\n");
    }

    return 0;
}
