#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    printf("Digite o valor da venda\n");
    scanf("%f", &valor);

    if(valor >= 100000){
        printf("Comissao: %f", (valor + 700) + valor * 0.16);
    }else{
        if(valor >= 80000){
            printf("Comissao: %f", (valor + 650) + valor * 0.14);
        }else{
            if(valor >= 60000){
                printf("Comissao: %f", (valor + 600) + valor * 0.14);
            }else{
                if(valor >= 40000){
                    printf("Comissao: %f", (valor + 550) + valor * 0.14);
                }else{
                    if(valor >= 20000){
                        printf("Comissao: %f", (valor + 500) + valor * 0.14);
                    }else{
                        printf("Comissao: %f", (valor + 400) + valor * 0.14);
                    }
                }
            }
        }
    }

    return 0;
}
