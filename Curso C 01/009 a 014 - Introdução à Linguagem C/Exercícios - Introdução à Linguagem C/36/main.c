#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, r;
    printf("Digite uma altura e um raio\n");
    scanf("%f %f", &altura, &r);
    printf("O volume do cilindro e %f", 3.14 * r * r * altura);

    return 0;
}
