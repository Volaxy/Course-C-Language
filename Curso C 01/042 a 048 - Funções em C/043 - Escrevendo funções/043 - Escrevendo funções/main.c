#include <stdio.h>

//aula 02 escrevendo fun��es
// main -> principal

// Estrutura das fun��es
/*
 - tipo de retorno
 - nome
 - par�metros de entrada (opcional)
 - implementa��o (corpo da fun��o)
 - retorno (opcional)
*/

void mensagem(){
	printf("Bem-vindo!");
}

int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}

// 'a'
// 97
void proximo_char(char caractere){
	printf("%c", caractere+1);
}

int main(){
	printf("Ol�...");
	return 0;
}
