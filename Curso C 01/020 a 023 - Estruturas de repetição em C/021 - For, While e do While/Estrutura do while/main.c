#include <stdio.h>
//Estrutura de repeti��o
//while

/*
Utilizado quando voc� precisa de um loop
onde n�o se tenha um n�mero fixo de elementos
mas que tenha um crit�rio de parada e
antes de iniciar o loop a condi��o � checada.

Problema:
Fa�a um programa, no qual receba e soma n�meros
inteiros at� que o n�mero de entrada seja 0
e apresente a soma no final;
*/
int main(){
	int numero, soma = 0;

	printf("Informe um n�mero: ");
	scanf("%d", &numero);

	while(numero != 0){
		soma = soma + numero;
		//entrada
		printf("Informe um n�mero: ");
		scanf("%d", &numero);
	}

	printf("A soma � %d", soma);

	return 0;
}
