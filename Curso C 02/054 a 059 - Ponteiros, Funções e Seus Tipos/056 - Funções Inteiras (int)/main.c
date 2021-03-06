#include <stdio.h>
#include <stdlib.h>

//Definindo que a fun��o existe
int retornaDez();
float retornaQuebrado();

int main(){

    //Definindo Vari�veis
    int a;

    //Passando o retorno de uma fun��o para uma vari�vel
    a = retornaDez();

    //Imprimindo valor de a
    printf("\n%d", a);

    //Definndo um float
    float b;

    //Passando o retorno de uma fun��o para uma vari�vel
    b = retornaQuebrado();

    //Imprimindo valor de a
    printf("\n%f", b);

    return 0;
}

//Fun��o que retorna 10
int retornaDezEImprimeMensagem(){
    printf("\nOi galera! \n");
    int numero = 10;
    return numero;
}

//Retorna um n�mero quebrado
float retornaQuebrado(){
    return 5.5;
}
