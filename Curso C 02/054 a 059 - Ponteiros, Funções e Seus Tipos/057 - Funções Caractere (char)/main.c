#include <stdio.h>
#include <stdlib.h>

char retornaLetra(){
    return 'x';
}

int main(){

    //Definindo vari�veis
    char letra;

    //Char recebendo valor de uma fun��o
    letra = retornaLetra();

    //Imprimindo novo valor
    printf("%c", letra);

    return 0;
}
