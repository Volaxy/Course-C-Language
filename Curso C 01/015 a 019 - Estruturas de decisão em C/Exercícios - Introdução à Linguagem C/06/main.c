#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Digite dois numeros\n");
    scanf("%d %d", &x, &y);

    if(x > y) {
        printf("x e maior\n");
        printf("A diferenca e %d", x - y);
    }else{
        printf("y e maior\n");
        printf("A diferenca e %d", y - x);
    }

    return 0;
}
