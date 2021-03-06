#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, segundo, minuto, hora, horai, minutoi, segundoi;

    printf("Digite um horario inicial da experiencia em: hora, minuto e segundo\n");
    scanf("%d %d %d", &horai, &minutoi, &segundoi);

    printf("Digite um valor em segundos da experiencia\n");
    scanf("%d", &segundos);
    hora = segundos / 3600;
    minuto = (segundos - hora * 3600) / 60;
    segundo = (segundos - (hora * 3600) - (minuto * 60));

    horai += hora;
    minutoi += minuto;
    segundoi += segundo;

    while(hora >= 24) {
        hora -= 24;
    }

    while(minuto >= 60) {
        minuto -= 60;
    }

    while(segundo >= 60) {
        segundo -= 60;
    }

    printf("Termino da experiencia: H: %d horas | M: %d minutos | S: %d segundos", hora, minuto, segundo);

    return 0;
}
