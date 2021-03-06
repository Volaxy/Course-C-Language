#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma = 0;
    float multiplicacao = 1;

    printf("Digite dois numeros\n");
    scanf("%d %d", &x, &y);

    if(x > y){
        for(int i = y; i <= x; i++){
            soma += i;
        }
    }else{
        for(int i = x; i <= y; i++){
            if(i % 2 != 0){
                multiplicacao *= i;
            }
        }
    }

    printf("A soma e %d\n", soma);
    printf("A multiplicacao e %d", multiplicacao);

    return 0;
}
