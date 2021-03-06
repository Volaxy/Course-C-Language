#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, c, d, u;
    printf("Digite um numero\n");
    scanf("%d", &x);

    if(x > 0) {
        c = x / 100;
        d = (x - (c * 100)) / 10;
        u = x - (c * 100) - (d * 10);
        printf("Soma dos algarismos e %d", c + d + u);
    }else{
        printf("Numero invalido");
    }

    return 0;
}
