#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, negativos = 0;
    float vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%f", &vetor[i]);

        if(vetor[i] > 0){
            soma += vetor[i];
        }else{
            negativos++;
        }
    }

    printf("A soma e %d", soma);
    printf("O numero de negativos e %d", negativos);

    return 0;
}
