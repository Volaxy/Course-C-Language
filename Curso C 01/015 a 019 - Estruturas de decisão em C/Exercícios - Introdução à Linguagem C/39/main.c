#include <stdio.h>
#include <stdlib.h>

int main()
{
    int servico;
    float salario;
    printf("Digite o salario do funcionario e o tempo de servico\n");
    scanf("%f %d", &salario, &servico);

    if(salario <= 500){
        salario *= 1.25;
    }

    if(salario <= 1000){
        salario *= 1.20;
    }

    if(salario <= 1500){
        salario *= 1.15;
    }

    if(salario <= 2000){
        salario *= 1.1;
    }

    if(salario > 2000){
        printf("Sem reajuste");
    }

    if(servico < 1){
        printf("Sem reajuste");
    }else{
        if(servico <= 3){
            salario += 100;
        }else{
            if(servico <= 6){
                salario += 200;
            }else{
                if(servico <= 10){
                    salario += 300;
                }else{
                    salario += 500;
                }
            }
        }
    }

    printf("Seu salario e %f", salario);

    return 0;
}
