#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("Digite um numero\n");
    scanf("%d", &x);

    if(x < 0){
        printf("Numero negativo\n");
    }else{
        printf("Log do numero e %f", log(x));
    }

    return 0;
}
