#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, servico;
    printf("Digite a idade e os anos de servico de um trabalhador\n");
    scanf("%d %d", &idade, &servico);

    if(idade >= 65 || servico >= 30 || (idade >= 60 && servico >= 25)){
        printf("Pode se aposentar");
    }else{
        printf("Nao pode se aposentar");
    }

    return 0;
}
