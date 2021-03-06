#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, *xx;
    float y = 2, *yy;
    char z = 'g', *zz;

    xx = &x;
    yy = &y;
    zz = &z;

    printf("Valor: %d\n", x);
    printf("Valor: %f\n", y);
    printf("Valor: %c\n", z);

    *xx = 2;
    *yy = 3;
    *zz = 'u';

    printf("Valor: %d\n", x);
    printf("Valor: %f\n", y);
    printf("Valor: %c\n", z);

    return 0;
}
