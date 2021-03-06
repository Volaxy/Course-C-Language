#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma = 0;

    printf("Digite um valor inicial e final\n");
    scanf("%d %d", &x, &y);

    if(x > y){
        printf("Valor invalido\n");
    }else{
        for(int i = x; i <= y; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
    }

    printf("A soma e %d", soma);

    return 0;
}
