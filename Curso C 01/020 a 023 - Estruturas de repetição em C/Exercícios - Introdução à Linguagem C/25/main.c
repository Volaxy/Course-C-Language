#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;

    for(int i = 1; i < 1000; i++){
        if(i % 3 == 0 && i % 5 == 0){
            soma += i;
        }
    }

    printf("A soma e %d", soma);

    return 0;
}
