#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//atol()

int main(){
	char valor_s[500];
	double valor_li;

	strcpy(valor_s, "499929393"); //"499929393"

	valor_li = atol(valor_s);

	printf("O valor é %lf", valor_li);

	return 0;
}
