#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Digite 2 numeros\n");
    scanf("%d %d", &x, &y);

    if(x > y) {
        printf("%d e maior", x);
    }else{
        printf("%d e maior", y);
    }

    return 0;
}
