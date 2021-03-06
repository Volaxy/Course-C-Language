#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Digite dois numeros\n");
    scanf("%d %d", &x, &y);

    if(x > y) {
        printf("x e maior\n");
    }else{
        if(y > x) {
            printf("y e maior\n");
        }else{
            printf("Numeros iguais");
        }
    }

    return 0;
}
