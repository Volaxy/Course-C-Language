#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, c, d, u;
    printf("Digite um numero de 4 digitos\n");
    scanf("%d", &n);
    m = n / 1000;
    c = (n - m * 1000) / 100;
    d = (n - (m * 1000) - (c * 100)) / 10;
    u = n - (m * 1000) - (c * 100) - (d * 10);
    printf("%d\n", m);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", u);

    return 0;
}
