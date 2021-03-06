#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], b[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &b[i]);
    }

    int c[10];

    for(int i = 0; i < 10; i++){
        c[i] = a[i] + b[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", c[i]);
    }

    return 0;
}
