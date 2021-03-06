#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, anoatual;
    printf("Digite sua idade e o ano atual\n");
    scanf("%d %d", &idade, &anoatual);
    printf("Ano de nascimento: %d", anoatual - idade);

    return 0;
}
