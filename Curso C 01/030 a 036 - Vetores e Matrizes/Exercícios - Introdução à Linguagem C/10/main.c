#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[15], soma = 0;

    for(int i = 0; i < 15; i++){
        printf("Digite uma nota\n");
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    printf("A media geral e %f", soma / 15);

    return 0;
}
