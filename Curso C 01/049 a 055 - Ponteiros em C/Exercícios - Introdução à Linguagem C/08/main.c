#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais[10];

    for(int i = 0; i < 10; i++){
        reais[i] = i;
    }

    for(int i = 0; i < 10; i++){
        printf("Posicao: %d\n", &reais[i]);
    }

    return 0;
}
