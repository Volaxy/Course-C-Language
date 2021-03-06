#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor){
    printf("\n A soma entre %d e %d eh %d", primeiroValor,segundoValor,primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}

int main(){

    //Definindo Vari�veis
    int a = 5, b = 7;

    //Fun��o que mostra a soma
    mostraSoma(a,b);

    //Exibe o resultado da soma retornado pela fun��o
    printf("\n A soma entre %d e %d eh %d", a,b,retornaSoma(a,b));

    //Retorno da Fun��o
    return 0;
}
