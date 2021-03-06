#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Digite a idade de um nadador\n");
    scanf("%d", &idade);

    if(idade >= 5 && idade < 7){
        printf("Infantil A");
    }else{
        if(idade <= 10){
            printf("Infantil B");
        }else{
            if(idade <= 13){
                printf("Juvenil A");
            }else{
                if(idade <= 17){
                    printf("Juvenil B");
                }else{
                    printf("Maior que 18 anos");
                }
            }
        }
    }

    return 0;
}
