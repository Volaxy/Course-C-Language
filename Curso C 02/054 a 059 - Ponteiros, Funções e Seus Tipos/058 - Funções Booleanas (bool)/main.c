#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano(){
    return true;
}

int main(){

    //Definindo vari�veis
    bool variavelBooleana;

    //Vari�vel recebendo booleano
    variavelBooleana = retornaBooleano();

    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("Eh verdadeiro!");
    }//Sen�o, executa o segundo bloco
    else{
        printf("Eh falso!");
    }

    //Retorno da Fun��o
    return 0;
}
