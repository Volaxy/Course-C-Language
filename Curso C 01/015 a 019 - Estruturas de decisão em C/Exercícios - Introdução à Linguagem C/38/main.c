#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("Digite sua data de nascimento\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(ano > 2020){
        printf("Data invalida");
    }else{
        if(mes > 12){
            printf("Data invalida");
        }else{
            switch(mes){
                case 2:
                    if(ano % 4 != 0 || ano % 400 == 0){
                        if(ano % 400 == 0 && ano % 100 == 0 && dia > 29){
                            printf("Data invalida");
                        }
                    }else{
                        if(dia > 28){
                            printf("Data invalida");
                        }
                    }
                    break;
                case 4:
                    if(dia > 30){
                        printf("Dia invalido");
                    }
                    break;
                case 6:
                    if(dia > 30){
                        printf("Dia invalido");
                    }
                    break;
                case 9:
                    if(dia > 30){
                        printf("Dia invalido");
                    }
                    break;
                case 11:
                    if(dia > 30){
                        printf("Dia invalido");
                    }
                    break;
            }
        }
    }

    return 0;
}
