#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite 3 numeros\n");
    scanf("%d %d %d", &a, &b, &c);

    if(c * c == (b * b) + (a * a)){
        printf("E um termo pitagorico");
    }

    return 0;
}
