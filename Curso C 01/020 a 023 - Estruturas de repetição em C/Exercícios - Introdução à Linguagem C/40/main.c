#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, maior = 0, menor = 0;

    do{
        printf("Digite um numero\n");
        scanf("%d", &n);

        if(n > 0){
            if(n > maior){
                maior = n;
            }else{
                menor = n;
            }
        }
    }while(n >= 0);

    printf("O maior numero e %d\nE o menor numero e %d\n", maior, menor);

    return 0;
}
