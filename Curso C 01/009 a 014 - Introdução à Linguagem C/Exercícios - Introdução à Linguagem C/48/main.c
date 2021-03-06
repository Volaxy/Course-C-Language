#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, segundo, minuto, hora;
    printf("Digite um valor em segundos\n");
    scanf("%d", &segundos);
    hora = segundos / 3600;
    minuto = (segundos - hora * 3600) / 60;
    segundo = (segundos - (hora * 3600) - (minuto * 60));
    printf("H: %d | M: %d | S: %d", hora, minuto, segundo);

    return 0;
}
