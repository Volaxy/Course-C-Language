#include <stdio.h>
#include <string.h>

// strtok()

int main(){
	char str1[] = "pedro@gmail.com";

	printf("Usuário: %s", strtok(str1, "@"));
	return 0;
}
