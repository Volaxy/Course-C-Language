#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }

    printf("A soma e %d", soma);

    return 0;
}
