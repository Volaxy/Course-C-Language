#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    char sexo;
    printf("Digite a altura e o sexo da pessoa\n");
    scanf("%f %c", &altura, &sexo);

    if(sexo == 'm') {
        printf("Seu peso ideal e %f", (72 * altura) - 58);
    }else{
        printf("Seu peso ideal e %f", (62.1 * altura) - 44.7);
    }

    return 0;
}
