#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[10], b[10];

    for(int i = 0; i < 5; i++){
        printf("Digite um valor\n");
        a[i] = rand() % 1000;
    }

    for(int i = 0; i < 5; i++){
        printf("Digite um valor\n");
        b[i] = rand() % 1000;
    }

    float escalar = 0;

    for(int i = 0; i < 5; i++){
        printf("%f\n", a[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%f\n", b[i]);
    }

    for(int i = 0; i < 5; i++){
        escalar += a[i] * b[i];
    }

    printf("O produto escalar e %f", escalar);

    return 0;
}
