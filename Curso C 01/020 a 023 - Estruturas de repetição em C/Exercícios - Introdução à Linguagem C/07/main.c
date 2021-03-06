#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float media;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &n);

        if(n >= 0){
            media += n;
        }
    }

    media /= 10;

    printf("A media e %f", media);

    return 0;
}
