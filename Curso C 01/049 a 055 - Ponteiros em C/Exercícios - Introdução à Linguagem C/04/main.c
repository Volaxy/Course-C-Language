#include <stdio.h>
#include <stdlib.h>

void trocar(int* x, int* y) {
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;

    printf("%d\n", *x);
    printf("%d\n", *y);
}

int main()
{
    int x = 1, y = 2;

    trocar(&x, &y);

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}
