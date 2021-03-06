#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4], maiorque10 = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um valor\n");
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] > 10){
                maiorque10++;
            }
        }
    }

    printf("O numero de valores maior do que 10 e %d", maiorque10);

    return 0;
}
