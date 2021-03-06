#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custo;
    printf("Digite o custo de fabrica\n");
    scanf("%f", &custo);

    if(custo <= 12000){
        custo *= 1.05;
    }else{
        if(custo <= 25000){
            custo *= 1.1;
            custo *= 1.15;
        }else{
            custo *= 1.15;
            custo *= 1.2;
        }
    }

    printf("O custo do carro e %f", custo);

    return 0;
}
