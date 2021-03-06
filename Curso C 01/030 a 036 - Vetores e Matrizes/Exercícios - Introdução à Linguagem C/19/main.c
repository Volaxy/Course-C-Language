#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[50];

    for(int i = 0; i < 50; i++){
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    for(int i = 0; i < 50; i++){
        printf("%f\n", vetor[i]);
    }

    return 0;
}
