#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, emprestimo;
    printf("Digite um salario e um emprestimo\n");
    scanf("%f %f", &salario, &emprestimo);

    if(emprestimo > 0.20 * salario) {
        printf("Emprestimo nao concedido\n");
    }else{
        printf("Emprestimo concedido\n");
    }

    return 0;
}
