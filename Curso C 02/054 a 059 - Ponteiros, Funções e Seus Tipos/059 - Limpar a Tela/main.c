#include <stdio.h>
#include <stdlib.h>

//Limpa a tela
void limpaTela(){
    system("CLS");
}

int main(){

    //Definindo Vari�veis
    int a;

    //Imprimindo alguma coisa
    printf("Digite um valor para 'a':");

    //Lendo o valor
    scanf("%d", &a);

    //Chama a fun��o que limpa a tela
    limpaTela();

    printf("O valor digitado foi %d \nFim do Programa!", a);

    //Retorno da Fun��o
    return 0;
}
