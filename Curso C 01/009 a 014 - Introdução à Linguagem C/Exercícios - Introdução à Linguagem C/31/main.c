#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero\n");
    scanf("%d", &n);
    printf("O antecessor e %d e o sucessor e %d", n - 1, n + 1);

    return 0;
}
