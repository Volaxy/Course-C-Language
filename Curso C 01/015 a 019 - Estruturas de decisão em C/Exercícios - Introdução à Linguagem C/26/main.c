#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km, l;
    printf("Digite o km e a quantidade de l\n");
    scanf("%d %d", &km, &l);

    if(km / l < 8){
        printf("Venda o carro");
    }else{
        if(km / l <= 14){
            printf("Economico");
        }else{
            printf("Muito economico");
        }
    }

    return 0;
}
