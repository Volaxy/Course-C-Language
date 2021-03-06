#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero\n");
    scanf("%d", &n);
    printf("%d", (n * 3 + 1) + (n * 2 - 1));

    return 0;
}
