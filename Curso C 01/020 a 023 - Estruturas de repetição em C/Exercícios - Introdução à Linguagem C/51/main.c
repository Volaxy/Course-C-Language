#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano = 1995, multiplicador = 1;
    float salario = 2000, aumento = 1.015;

    while(ano < 2020){
        salario *= aumento;

        for(int i = 0; i < multiplicador; i++){
            aumento += 0.015;
        }

        multiplicador++;
        ano++;
    }

    printf("O salario atual do funcionario e %f", salario);

    return 0;
}
