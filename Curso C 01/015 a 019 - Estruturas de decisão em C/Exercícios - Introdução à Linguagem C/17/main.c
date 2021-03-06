#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bmaior, bmenor, h, a;
    printf("Digite a base maior, menor e a altura de um trapezio\n");
    scanf("%f %f %f", &bmaior, &bmenor, &h);

    a = (bmaior + bmenor) * h / 2;

    printf("A area do trapezio e %f", a);

    return 0;
}
