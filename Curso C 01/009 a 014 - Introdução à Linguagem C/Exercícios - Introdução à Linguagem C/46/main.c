#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, d, u;
    printf("Digite um numero de 3 digitos\n");
    scanf("%d", &n);
    c = n / 100;
    d = (n - c * 100) / 10;
    u = ((n - c * 100) - d * 10);
    printf("Numero invertido: %d%d%d", u, d, c);

    return 0;
}
