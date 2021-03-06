#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, eprimo = 1;

    printf("Digite um numero\n");
    scanf("%d", &n);

    if(n < 1){
        printf("Valor invalido\n");
    }else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                printf("Nao e primo\n");
                i = n;
                eprimo = 0;
            }
        }

        if(eprimo == 1){
            printf("O numero que voce digitou e primo\n");
        }
    }

    return 0;
}
