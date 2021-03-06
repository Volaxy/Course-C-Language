#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total = 780000;
    printf("O ganhador 1 recebe %f\n", total * 0.46);
    total *= 0.54;
    printf("O ganhador 2 recebe %f\n", total * 0.32);
    total *= 0.68;
    printf("O ganhador 3 recebe %f\n", total);

    return 0;
}
