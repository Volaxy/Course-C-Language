#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float e = 1, fatorial = 1;

    printf("Informe um numero\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            fatorial *= j;
        }
        e += 1 / fatorial;
        fatorial = 1;
    }

    printf("O valor E e igual a %f", e);

    return 0;
}
