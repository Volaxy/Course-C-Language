#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, peso;
    printf("Digite sua altura e seu peso\n");
    scanf("%f %f", &h, &peso);

    if(h <= 1.2){
        if(peso <= 60){
            printf("A");
        }

        if(peso <= 90){
            printf("B");
        }

        if(peso > 90){
            printf("C");
        }
    }

    if(h > 1.2 && h <= 1.7){
        if(peso <= 60){
            printf("D");
        }

        if(peso <= 90){
            printf("E");
        }

        if(peso > 90){
            printf("F");
        }
    }

    if(h > 1.7){
        if(peso <= 60){
            printf("G");
        }

        if(peso <= 90){
            printf("H");
        }

        if(peso > 90){
            printf("I");
        }
    }

    return 0;
}
