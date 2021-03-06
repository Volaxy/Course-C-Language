#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s = 0, j = 1;

    for(float i = 1; i < 100; i += 2){
        s += i / j;
        j++;
    }

    printf("A soma e %f", s);

    return 0;
}
