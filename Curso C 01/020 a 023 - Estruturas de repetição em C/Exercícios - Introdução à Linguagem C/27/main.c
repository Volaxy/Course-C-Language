#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float total = 0;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(float i = 1; i <= n; i++){
        total += 1 / i;
    }

    printf("O valor harmonico e %f", total);

    return 0;
}
