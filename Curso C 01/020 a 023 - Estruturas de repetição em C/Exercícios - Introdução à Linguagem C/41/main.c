#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, r1, r2;

    do{
        printf("Digite o valor de 2 resitencias\n");
        scanf("%f %f", &r1, &r2);

        r = (r1 * r2) / (r1 + r2);

        printf("Resistencia: %f\n", r);
    }while(r != 0);

    return 0;
}
