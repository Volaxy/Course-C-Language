#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &valores[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 9; j > i; j--){
            if(valores[i] == valores[j]){
                printf("Valor igual encontrado: %d\n", valores[i]);
            }
        }
    }

    return 0;
}
