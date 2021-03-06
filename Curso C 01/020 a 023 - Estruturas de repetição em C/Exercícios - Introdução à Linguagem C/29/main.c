#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s = 0, fatorial = 1, contador = 2;

    for(int i = 1; i <= 5; i++){
        for(int j = contador; j > 0; j--){
            fatorial *= j;
        }
        contador += 2;
        s += i / fatorial;
        fatorial = 1;
    }

    printf("O valor de S e %f", s);

    return 0;
}
