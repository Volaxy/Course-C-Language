#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, d, u;
    printf("Digite um numero\n");
    scanf("%d", &n);

    if(n >= 100 && n <= 999){
        c = n / 100;
        d = (n - (c * 100)) / 10;
        u = n - (c * 100) - (d * 10);

        printf("%d %d %d", c, d, u);
    }

    return 0;
}
