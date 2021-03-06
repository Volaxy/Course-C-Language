#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, degraus;
    printf("Digite a altura do degrau e quantos m de altura voce quer subir\n");
    scanf("%f %f", &altura, &degraus);
    printf("Total de degraus a subir: %f", degraus / altura);

    return 0;
}
