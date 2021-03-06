#include <stdio.h>
//Estrutura de repeti��o
//do..while (fa�a..enquanto)

/*
Utilizado quando voc� precisa de um loop
onde n�o se tenha um n�mero fixo de elementos
mas que tenha um crit�rio de parada e � checada
ap�s a primeira execu��o.

Problema:
Fa�a um programa, no qual receba e soma n�meros
inteiros at� que o n�mero de entrada seja 0
e apresente a soma no final;
*/
int main(){

	int numero, soma = 0;

	do{
		//entrada
		printf("Informe um n�mero: ");
		scanf("%d", &numero);

		//processamento
		soma = soma + numero;
	}while(numero != 0);

	printf("A soma � %d", soma);

	return 0;
}
