#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano = 0;
    float chico = 1.5, ze = 1.1;

    while(ze < chico){
        chico += 0.02;
        ze += 0.03;

        ano++;
    }

    printf("Vai demorar %d anos", ano);

    return 0;
}
