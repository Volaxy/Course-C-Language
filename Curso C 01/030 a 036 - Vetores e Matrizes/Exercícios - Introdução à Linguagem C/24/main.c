#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[10], numeromaior, numeromenor;
    float altura[10], maior = -100, menor = 100;

    for(int i = 0; i < 10; i++){
        printf("Digite o numero do aluno\n");
        numero[i] = rand() % 50;

        printf("Digite a altura do aluno %d\n", numero[i]);
        scanf("%f", &altura);

        if(altura[i] > maior){
            numeromaior = numero[i];
            maior = altura[i];
        }

        if(altura[i] < menor){
            numeromenor = numero[i];
            menor = altura[i];
        }
    }

    printf("O maior aluno tem o codigo %d com %f de altura\n", numeromaior, maior);
    printf("O menor aluno tem o codigo %d com %f de altura\n", numeromenor, menor);

    return 0;
}
