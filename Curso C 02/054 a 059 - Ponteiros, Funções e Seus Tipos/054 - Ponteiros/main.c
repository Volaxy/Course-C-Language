#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    //Vari�vel
    int a = 20;

    //Imprimindo o valor de uma vari�vel
    printf("Valor de a: %d \n", a);

     //Imprimindo o endere�o de uma vari�vel
    printf("Endere�o de a: %d \n", &a);

    //VARI�VEIS ARMAZENAM VALORES
    int b = 10;

    //PONTEIROS ARMAZENAM POSI��ES DA MEM�RIA
    int *ponteiro;

    //PONTEIRO RECEBENDO A POSI��O NA MEM�RIA DA VARI�VEL b
    ponteiro = &b;

    //Imprimindo o valor de uma vari�vel
    printf("Valor de b: %d \n", b);

    //* pode ser lido como "CONTE�DO APONTADO POR"
    *ponteiro = 40;

    //Imprimindo o valor de uma vari�vel
    printf("Valor de b: %d \n", b);

    return 0;
}
