#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, imc;
    printf("Digite seu peso e sua altura\n");
    scanf("%f %f", &peso, &altura);

    imc = peso / altura;

    if(imc < 18.5){
        printf("abaixo do peso");
    }else{
        if(imc <= 24.9){
            printf("saudavel");
        }else{
            if(imc <= 29.9){
                printf("peso em excesso");
            }else{
                if(imc <= 34.9){
                    printf("obesidade grau 1");
                }else{
                    if(imc <= 39.9){
                        printf("obesidade grau 2");
                    }else{
                        printf("obesidade grau 3");
                    }
                }
            }
        }
    }

    return 0;
}
