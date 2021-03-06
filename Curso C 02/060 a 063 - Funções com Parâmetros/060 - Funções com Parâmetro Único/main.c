#include <stdio.h>
#include <stdlib.h>


void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero){
    return numero - 1;
}

int main(){

    //Definindo Vari�veis
    int a;

    //Instru��o
    printf("Digite um valor:");

    //Passa um valor para 'a'
    scanf("%d", &a);

    //Chama a fun��o
    mostraSucessor(a);

    //Exibe o antecessor
    printf("\nO antecessor de %d eh %d", a, retornaAntecessor(a));

    //Retorno da Fun��o
    return 0;
}
