#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horai, minutoi, horaf, minutof, horas;
    printf("Qual o momento inicial no estacionamento\n");
    scanf("%d %d", &horai, &minutoi);
    printf("Qual o momento final no estacionamento\n");
    scanf("%d %d", &horaf, &minutof);

    if(horai >= 24 || horaf >= 24 || minutoi >= 60 || minutof >= 60){
        printf("Dados invalidos");
    }else{
        if(horai > horaf){
            horas = 24 - horai + horaf;
        }else{
            horas = horaf - horai;
        }

        if(minutoi != 0 && minutof != 0 && minutoi != minutof){
            if(minutoi < minutof){
                horas += 2;
            }else{
                horas++;
            }
        }
    }

    switch(horas){
        case 1:
            printf("pague 1");
            break;
        case 2:
            printf("pague 2");
            break;
        case 3:
            printf("pague 3.4");
            break;
        case 4:
            printf("pague 4.8");
            break;
        default:
            printf("pague %f", 4.8 + horas * 2);
            break;
    }

    return 0;
}
