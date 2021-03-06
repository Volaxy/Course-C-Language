#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        d1 = rand() % 6;
        d2 = rand() % 6;

        if(d1 > d2){
            printf("d1 maior\n");
        }else{
            if(d1 < d2){
                printf("d2 maior\n");
            }else{
                printf("d1 e d2 sao iguais\n");
            }
        }
    }

    return 0;
}
