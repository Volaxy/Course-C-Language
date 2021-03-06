#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("Digite uma letra MAIUSCULA\n");
    scanf("%c", &letra);
    letra += 32;
    printf("Letra minuscula: %c", letra);

    return 0;
}
